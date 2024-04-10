#include <binary_trees.h>

/**
 * binary_tree_delete - Function that deletes an entire binary tree
 *
 * @tree: The parameter that represents
 * a pointer to the root node of the binary tree
 *
 * Return: Returns no value
 *
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (NULL);
	}

	binary_tree_delete((*tree).left);
	binary_tree_delete((*tree).right);
	free(tree);
}
