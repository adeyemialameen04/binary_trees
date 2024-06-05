#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts a node at the left of a node.
* @parent: The parent.
* @value: The value to be inserted.
* Return: A pointer to the new node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

new_node = binary_tree_node(parent, value);
if (new_node == NULL)
return (NULL);

if (parent->left == NULL)
parent->left = new_node;
else
{
new_node->left = parent->left;
parent->left->parent = new_node;
}
parent->left = new_node;

return (new_node);
}
