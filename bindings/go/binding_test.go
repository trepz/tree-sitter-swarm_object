package tree_sitter_swarm_object_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_swarm_object "github.com/trepz/tree-sitter-swarm_object/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_swarm_object.Language())
	if language == nil {
		t.Errorf("Error loading SwarmObject grammar")
	}
}
