#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root of a binary tree.
 * @node: A pointer to the node to check.
 * Return: 1 if node is a root, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	int is_root = 0;

	if (node != NULL && node->parent == NULL)
		is_root = 1;

	return (is_root);
}
