#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
	* binary_tree_leaves - Counts the leavs in a binary tree.
* @tree: The tree.
* Return: The number of leaves.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t ll, rl;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	ll = binary_tree_leaves(tree->left);
	rl = binary_tree_leaves(tree->right);

	return (ll + rl);
}
