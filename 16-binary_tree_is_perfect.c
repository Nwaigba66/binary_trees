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
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree to measure the balance factor
 *
 * Return: the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	int left_tree = binary_tree_h(tree->left);
	int right_tree = binary_tree_h(tree->right);

	return (left_tree - right_tree);
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
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1 && binary_tree_balance(tree) == 0)
		return (1);
	return (0);
}
