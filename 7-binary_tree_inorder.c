#include "binary_trees.h"

/**
 * binary_tree_inorder - binary tree inorder traversal
 * @tree: pointer to tree to traverse
 * @func: user defined binary tree node value printing
 *
 * Return: nothing
*/

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
