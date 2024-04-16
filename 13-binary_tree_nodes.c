#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes
 * with at least 1 child in a binary tree
 *
 * @tree: The parameter that rerpesents the pointer to the tree
 *
 * Return: Returns the count of the nodes
 *
 *
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes, current_node_count;

	if (!tree)
	{
		return (0);
	}

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	current_node_count = (tree->left || tree->right) ? 1 : 0;

	return (left_nodes + right_nodes + current_node_count);
}
