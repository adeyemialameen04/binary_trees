#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a node at the right of a node.
* @parent: The parent.
* @value: The value to be inserted.
* Return: A pointer to the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;

if (parent == NULL)
return (NULL);

new_node = binary_tree_node(parent, value);
if (parent->right == NULL)
parent->right = new_node;
else
{
new_node->right = parent->right;
parent->right->parent = new_node;
}

parent->right = new_node;

return (NULL);
}
