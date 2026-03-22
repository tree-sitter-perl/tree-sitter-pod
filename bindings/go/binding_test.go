package tree_sitter_pod_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_pod "github.com/tree-sitter-perl/tree-sitter-pod/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_pod.Language())
	if language == nil {
		t.Errorf("Error loading Pod grammar")
	}
}
