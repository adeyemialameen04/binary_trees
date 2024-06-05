#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

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
