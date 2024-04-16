#include "binary_trees.h"

/**
 * binary_tree_inorder - Function that goes through a binary tree using
 * in-order traversal
 *
 * @tree: The parameter that represents pointer to the tree
 * @func: The parameter that represents the call for each node
 *
 * Return: Returns no value
 *
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	{
		return;
	}

	binary_tree_inorder((*tree).left, func);
	func((*tree).n);
	binary_tree_inorder((*tree).right, func);
}
