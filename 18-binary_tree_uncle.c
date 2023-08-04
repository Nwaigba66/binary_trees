#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node to look for its uncle
 * Return: pointer to the uncle node, NULL otherwise
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (!node || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = parent->parent;

	if (grandparent->left != NULL && grandparent->right != NULL)
	{
		if (grandparent->left == parent)
			return (grandparent->right);
		else
			return (grandparent->left);
	}

return (NULL);
}
