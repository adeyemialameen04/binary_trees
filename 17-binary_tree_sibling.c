#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a node.
* @node: A ptr to the node to check.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL ||
node->parent->right == NULL || node->parent->left == NULL)
return (NULL);

if (node->n == node->parent->left->n)
return (node->parent->right);

if (node->n == node->parent->right->n)
return (node->parent->left);

return (NULL);
}
