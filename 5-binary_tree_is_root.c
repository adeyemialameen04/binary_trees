#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a node is the root.
* @node: The node to be checked.
* Return: 1 if its a leaf 0 otherwise.
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL)
return (0);

if (node->parent == NULL)
return (1);

return (0);
}
