#include "binary_trees.h"

/**
 * measure_depth - Computes the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node in the binary tree.
 * Return: The depth of the node in the tree or 0 if the node is NULL.
 */
size_t measure_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (measure_depth(tree->parent) + 1);
}

/**
 * binary_tree_depth - Computes the depth of a node in a binary tree.
 *
 * @tree: A pointer to the node in the binary tree.
 * Return: The depth of the node in the tree or 0 if the node is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (measure_depth(tree) - 1);
}
