#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_uncle - Gets the uncle of a node.
* @node: The node.
* Return: A pointer to the uncle.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
binary_tree_t *p, *gp;

if (node == NULL || node->parent == NULL ||
node->parent->parent == NULL)
return (NULL);

p = node->parent;
gp = node->parent->parent;

if (gp->left == p)
return (gp->right);
else
return (gp->left);
}
