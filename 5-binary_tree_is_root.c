#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_root - Function that checks if a given node is a root
 *
 * @node: The parameter
 * that represents a pointer to the node that will be checked
 *
 * Return: Returns 1 if the node is a root, otherwise returns 0
 *
 *
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if ((*node).parent != NULL || node == NULL)
	{
		return (0);
	}

	return (1);
}
