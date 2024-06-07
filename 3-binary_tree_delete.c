#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
	* binary_tree_delete - Deletes a binary tree.
* @tree: The tree to be deleted.
* Return: Nothing.
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
