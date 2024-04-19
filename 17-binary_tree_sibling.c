#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the uncle of a node
 *
 * @node: The parameter that represents pointer to the node
 *
 * Return: Returns a pointer to the sibling node
 *
 *
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	return ((node == node->parent->right) ? node->parent->left :
		node->parent->right);
}
