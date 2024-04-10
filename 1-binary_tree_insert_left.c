#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_insert_left - Function that inserts
 * a node as the left-child of another node
 *
 * @parent: The parameter that represents parent node of new node
 * @value: The parameter that represents the value of new node
 *
 * Return: Returns a pointer to the created node, otherwise returns null
 *
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
	{
		return (NULL);
	}

	node = binary_tree_node(parent, value);

	if (node == NULL)
	{
		return (NULL);
	}

	if (!((*parent).left))
	{
		(*node).left = (*parent).left;
		(*parent).left->parent = (*node);
	}

	(*parent).left = node;

	return (node);
}
