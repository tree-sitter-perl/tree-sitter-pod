# tree-sitter-pod

A tree-sitter parser for Perl's POD syntax

## Getting Started Developing

To get started, install the dependencies for this repo

```bash
npm i
```

That should get you set up with tree-sitter's cli locally.

### Generating the Bindings

In this project, the generated C source code (stored in the `src` directory) is
.gitignored. In order to generate it, run

```bash
npx tree-sitter generate 
```

You'll need to do this after any changes to the grammar.

### Running the tests

Tests are stored in the `/test/corpus` directory, as txt files. A little reference on the
syntax can be found [here](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test).

You can run the tests with 

```bash
npx tree-sitter test
```

See the help output (`-h`) for that command for some more details on using the test
runner.
