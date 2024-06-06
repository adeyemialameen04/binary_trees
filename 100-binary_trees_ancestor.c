#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
* binary_trees_ancestor - LCA.
* @first: First node.
* @second: second node.
* Return: LCA.
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
const binary_tree_t *tmp;

if (first == NULL || second == NULL)
return (NULL);

tmp = second;

while (first)
{
second = tmp;
while (second)
{
if (first == second)
return ((binary_tree_t *)first);
second = second->parent;
}
first = first->parent;
}

return (NULL);
}
