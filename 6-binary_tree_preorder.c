#include "binary_trees.h"

/**
 * binary_tree_preorder - binary tree preorder traversal
 * @tree: pointer to tree to traverse
 * @func: user defined binary tree node value printing
 *
 * Return: nothing
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
