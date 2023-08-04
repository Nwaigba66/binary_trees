#include "binary_trees.h"
/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to the root node of the tree to count the number of nodes
* Return: The number of leaves in the tree
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_child, right_child, nodes_count;
	
	if (tree == NULL)
		return (0);

	left_child = (tree->left != NULL);
	right_child = (tree->right != NULL);
	nodes_count = left_child || right_child;

	nodes_count += binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (nodes_count);
}
