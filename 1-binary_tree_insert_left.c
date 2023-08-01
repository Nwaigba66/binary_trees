#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserting a node to left
 * @parent: pointer to the parent node
 * @value: value to assign to the new node
 * Return: NULL on failin, new node on success
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *old_left_child = NULL;
	binary_tree_t *new_left_child = NULL;

	new_left_child = binary_tree_node(parent, value);

	if (new_left_child == NULL)
		return (NULL);

	if (parent->left != NULL)
		old_left_child = parent->left;

	parent->left = new_left_child;

	if (old_left_child)
	{
		new_left_child->left = old_left_child;
		old_left_child->parent = new_left_child;
	}

	return (new_left_child);
}
