#include "binary_trees.h"
/**
 * recursive_height - measures the height of a binary tree
 *
 * @tree: tree root
 * Return: height
 */
size_t recursive_height(const binary_tree_t *tree)
{
<<<<<<< HEAD
	int left_height;
	int right_height;

	if (tree)
	{
		left_height = measure_height(tree->left);
		right_height = measure_height(tree->right);
		return (left_height - right_height);
	}
	return (0);
=======
    size_t left = 0;
    size_t right = 0;

    if (tree == NULL)
        return 0;

    left = recursive_height(tree->left);
    right = recursive_height(tree->right);

    if (left > right)
        return left + 1;

    return right + 1;
}

/**
 * binary_tree_height - calls recursive_height to return the height
 * of a binary tree
 *
 * @tree: tree root
 * Return: height of the tree or 0 if tree is NULL;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;

    return recursive_height(tree) - 1;
>>>>>>> a29a7b9e37dabc02decfe8c9e609a75d5b51ae8d
}

/**
 * calculate_balance - calculates the balance factor of a binary tree
 *
 * @tree: tree root
 * Return: balance factor of the tree or 0 if tree is NULL;
 */
int calculate_balance(const binary_tree_t *tree)
{
<<<<<<< HEAD
	int left_ht, right_ht;

	if (tree)
	{
		left_ht = (tree->left) ? 1 + measure_height(tree->left) : 1;
		right_ht = (tree->right) ? 1 + measure_height(tree->right) : 1;
		return ((left_ht > right_ht) ? left_ht : right_ht;)
	}
	return (0);
=======
    if (tree == NULL)
        return 0;

    return binary_tree_height(tree->left) - binary_tree_height(tree->right);
}

/**
 * binary_tree_balance - calls calculate_balance to return the balance
 * of a binary tree
 *
 * @tree: tree root
 * Return: balance factor of the tree or 0 if tree is NULL;
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    return calculate_balance(tree);
>>>>>>> a29a7b9e37dabc02decfe8c9e609a75d5b51ae8d
}
