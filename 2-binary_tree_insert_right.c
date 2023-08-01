#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserting a node to the right
 * @parent: pointer to the parent node
 * @value: value to assign to the new node
 * Return: NULL on failin, new node on success
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *old_right_child = NULL;
	binary_tree_t *new_right_child = NULL;

	if (parent == NULL)
		return (NULL);

	new_right_child = binary_tree_node(parent, value);
	if (new_right_child == NULL)
		return (NULL);

	if (parent->right != NULL)
		old_right_child = parent->right;

	parent->right = new_right_child;

	if (old_right_child)
	{
		new_right_child->right = old_right_child;
		old_right_child->parent = new_right_child;
	}

	return (new_right_child);
}
