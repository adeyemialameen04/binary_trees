#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
 * max - Finds the max of two nums.
 * @a: 1st number
 * @b: 2nd number
 * Return: The max.
 */
size_t max(size_t a, size_t b)
{
return ((a > b) ? a : b);
}


/**
  * binary_tree_height - Finds the height of a bt.
* @tree: The tree.
* Return: size_t.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left, right;

if (tree == NULL)
return (0);

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);


return (1 + max(left, right));
}
