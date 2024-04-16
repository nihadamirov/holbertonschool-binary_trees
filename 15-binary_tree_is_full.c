#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 *
 * @tree: The parameter that rerpesents the pointer to the tree
 *
 * Return: Returns if the tree is full then it gives a value 1, otherwise 0
 *
 *
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!(tree->left) && !(tree->right))
		return (1);

	if ((tree->left && tree->right) &&
	binary_tree_is_full(tree->left) &&
	binary_tree_is_full(tree->right))

		return (1);

	return (0);
}

