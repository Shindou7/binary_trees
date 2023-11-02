#include "binary_trees.h"

/**
 * call_function - Calls the func for each node in in-order traversal
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to the function to call for each node.
 */
void call_function(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		call_function(tree->left, func);
		func(tree->n);
		call_function(tree->right, func);
	}
}

/**
 * binary_tree_inorder - binary tree
 * @tree: A root tree
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	call_function(tree, func);
}
