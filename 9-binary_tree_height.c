#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: The parameter that represents height of the tree
 *
 * Return: Returns height of the tree
 *
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	else
	{
		left_height = binary_tree_height(tree->left) + 1;
		right_height = binary_tree_height(tree->right) + 1;
		if (left_height > right_height)
		{
			return (left_height);
		}

		else
		{
			return (right_height);
		}
	}
}

