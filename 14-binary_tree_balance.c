#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance
 * @tree: the root node of the tree
 * Return: If tree is NULL, return 0...
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree)
	{
		left_height = measure_height(tree->left);
		right_height = measure_height(tree->right);
		return (left_height - right_height);
	}
	return (0);
}

/**
 * measure_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the
 * tree to measure the height.
 * Return: If tree is NULL, your function must
 * return 0, else return height.
 */
int measure_height(const binary_tree_t *tree)
{
	int left_ht, right_ht;

	if (tree)
	{
		left_ht = (tree->left) ? 1 + measure_height(tree->left) : 1;
		right_ht = (tree->right) ? 1 + measure_height(tree->right) : 1;
		return ((left_ht > right_ht) ? left_ht : right_ht;)
	}
	return (0);
}
