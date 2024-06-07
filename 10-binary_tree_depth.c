#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"

/**
	* binary_tree_depth - Measures the depth of a bt.
* @tree: Tree.
* Return: The depth.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
