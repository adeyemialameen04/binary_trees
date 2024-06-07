#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
  * binary_tree_height - Finds the height of a bt.
* @tree: The tree.
* Return: size_t.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return ((left > right) ? left : right);
}
