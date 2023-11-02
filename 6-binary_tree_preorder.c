#include "binary_trees.h"

/**
 * call_function - Calls the function for each node in pre-order
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to the function to call for each node.
 */
void call_function(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		call_function(tree->left, func);
		call_function(tree->right, func);
	}
}

/**
 * binary_tree_preorder - goes through a binary tree using
 * @tree: A pointer to the root tree
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	call_function(tree, func);
}
