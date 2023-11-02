#include "binary_trees.h"

/**
 * check_full - checks if a binary tree is full.
 * @tree: root node of the tree to check.
 *
 * Return: Otherwise, 1 or 0.
 */
int check_full(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    check_full(tree->left) == 0 ||
		    check_full(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: root node of the tree to check.
 *
 * Return: Otherwise - 1 or 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_full(tree));
}
