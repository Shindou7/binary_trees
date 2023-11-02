#include "binary_trees.h"

/**
 * measure_height - Determines the height of a binary tree recursively.
 *
 * @tree: A pointer to the root node of the tree.
 * Return: The height of the tree or 0 if the tree is NULL.
 */
size_t measure_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = measure_height(tree->left);
	right_height = measure_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
 * binary_tree_height - Computes the height of a binary tree.
 *
 * @tree: A pointer to the root node of the tree.
 * Return: The height of the tree or 0 if the tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (measure_height(tree) - 1);
}
