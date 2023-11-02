#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node
 * @parent: A pointer to the node to insert
 * @value: The value to store in the new node.
 * Return: If parent is NULL or an error occurs
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right = NULL;

	if (parent != NULL)
	{
		new_right = binary_tree_node(parent, value);
		if (new_right == NULL)
			return (NULL);

		if (parent->right != NULL)
		{
			new_right->right = parent->right;
			new_right->right->parent = new_right;
		}
		parent->right = new_right;
	}

	return (new_right);
}
