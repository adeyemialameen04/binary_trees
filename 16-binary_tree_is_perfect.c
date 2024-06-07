#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>


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

/**
* binary_tree_size - Finds the size of a binary_trees
* @tree: The tree to find the size for.
* Return: size_t.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
	* binary_tree_is_perfect - Checks if a bt is perfect.
* @tree: The tree to check.
* Return: Nothing.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, expected_size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	expected_size = (1 << (height + 1)) + 1;

	return (size == expected_size);
}
