#include "binary_trees.h"

/**
 * binary_tree_h - measuring the height of the tree
 * @tree: tree to be measured
 * Return: height of the tree
*/
int binary_tree_h(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		int left_height, right_height;

		left_height = binary_tree_h(tree->left);
		right_height = binary_tree_h(tree->right);

		if (left_height > right_height)
		{
			return (left_height + 1);
		}
		else
		{
			return (right_height + 1);
		}
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree to measure the balance factor
 *
 * Return: the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_tree, right_tree;

	if (tree == NULL)
		return (0);

	left_tree = binary_tree_h(tree->left);
	right_tree = binary_tree_h(tree->right);

	return (left_tree - right_tree);
}
