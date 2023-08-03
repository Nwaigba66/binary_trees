#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: tree to count the size
 *
 * Return: If tree is not null we return the size of it, 0 Otherwise
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_tree = binary_tree_size(tree->left);
		size_t right_tree = binary_tree_size(tree->right);
		size_t size = left_tree + 1 + right_tree;

		return (size);
	}
	return (0);
}
