#include "binary_trees.h"

/**
 * count_height - Recursively measures the height of a binary tree
 * @tree: A pointer to a tree node
 * @height: The current height of the tree being traversed
 * @max: A pointer to the maximum height found so far
 *
 */
void count_height(const binary_tree_t *tree, size_t height, size_t *max)
{
	if (tree)
	{
		if (tree->left == NULL && tree->right == NULL)
		{
			if (height > *max)
			{
				*max = height;
			}
		}
		else
		{
			count_height(tree->left, height + 1, max);
			count_height(tree->right, height + 1, max);
		}
	}
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: The height of the tree. If 'tree' is NULL, returns 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t max_height = 0;

	count_height(tree, 0, &max_height);

	return (max_height);
}

