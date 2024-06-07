#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * is_bst_helper - helper function to check if a BT is a valid BST.
 * @tree: Pointer to the current node being checked.
 * @min: The minimum value allowed for the current node.
 * @max: The maximum value allowed for the current node.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 */
int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1); /* An empty tree is a valid BST */

	if (tree->n < min || tree->n > max)
		return (0); /* Current node violates BST property */

	return (is_bst_helper(tree->left, min, tree->n - 1) &&
	is_bst_helper(tree->right, tree->n + 1, max));
}


/**
 * binary_tree_is_bst - Checks if a binary tree is a valid BST.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}

