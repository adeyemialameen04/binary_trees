#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
  * binary_tree_postorder - Traverses a binary tree with the inorder technique.
* @tree: The tree to be traversed.
* @func: Callback function.
* return: Nothing.
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
if (func == NULL || tree == NULL)
return;

binary_tree_postorder(tree->left, func);
binary_tree_postorder(tree->right, func);
func(tree->n);
}
