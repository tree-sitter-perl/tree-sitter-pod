"""A tree-sitter parser for POD"""

from importlib.resources import files as _files

from ._binding import language


def _get_query(name, file):
    try:
        query = _files(f"{__package__}") / file
        globals()[name] = query.read_text()
    except FileNotFoundError:
        globals()[name] = None
    return globals()[name]


def __getattr__(name):
    if name == "HIGHLIGHTS_QUERY":
        return _get_query("HIGHLIGHTS_QUERY", "queries/highlights.scm")

    raise AttributeError(f"module {__name__!r} has no attribute {name!r}")


__all__ = [
    "language",
    "HIGHLIGHTS_QUERY",
]


def __dir__():
    return sorted(__all__ + [
        "__all__", "__builtins__", "__cached__", "__doc__", "__file__",
        "__loader__", "__name__", "__package__", "__path__", "__spec__",
    ])
