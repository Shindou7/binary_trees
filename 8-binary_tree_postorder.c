#include "binary_trees.h"

/**
 * call_function - Applies a func to each node in post-order traversal.
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to the function to apply to each node.
 */
void call_function(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		call_function(tree->left, func);
		call_function(tree->right, func);
		func(tree->n);
	}
}

/**
 * binary_tree_postorder - postorder a binary tree using
 * @tree: A pointer to the root tree.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	call_function(tree, func);
}
