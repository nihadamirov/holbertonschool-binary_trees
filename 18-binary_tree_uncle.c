#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: pointer to the uncle node
 *         NULL if node is NULL
 *         NULL if the parent is NULL
 *         NULL if the node has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	int is_left_child, is_parent_left_child;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->parent == NULL)
		return (NULL);

	is_left_child = (node->parent->left == node);
	is_parent_left_child = (node->parent->parent->left == node->parent);

	if (is_parent_left_child)
	{
		return (node->parent->parent->right);
	}
	return (node->parent->parent->left);
}
