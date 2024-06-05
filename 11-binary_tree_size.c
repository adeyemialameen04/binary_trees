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
int left = 0, right = 0;

while (tree->left != NULL)
{
left++;
tree->left = tree->left->left;
}

while (tree->right != NULL)
{
right++;
tree->right = tree->right->right;
}

return (left + right + 1);
}
