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
		int left_height = binary_tree_h(tree->left);
		int right_height = binary_tree_h(tree->right);

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
 * binary_tree_is_full - checks fo full binary tree
 * @tree: the tree to be checked
 * Return: 1 if full, 0 otherwise
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: the tree to be checked
 * Return: 1 for perfect tree, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balanced;

	if (tree == NULL)
		return (0);

	balanced = binary_tree_h(tree->left) - binary_tree_h(tree->right);
	if (binary_tree_is_full(tree) && balanced == 0)
		return (1);
	else
		return (0);
}
