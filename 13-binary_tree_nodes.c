#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
  * binary_tree_nodes - counts the node on the bt.
* @tree: The tree to be counted.
* Return: the count.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;

if (tree == NULL)
return (0);

if (tree->left != NULL || tree->right != NULL)
count++;

count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);

return (count);
}
