#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * launch_test - Test ancestor function and print informations
 *
 * @n1: First node
 * @n2: Second node
 */
// void launch_test(binary_tree_t *n1, binary_tree_t *n2)
// {
//     binary_tree_t *ancestor;
//
//     ancestor = binary_trees_ancestor(n1, n2);
//     printf("Ancestor of [%d] & [%d]: ", n1->n, n2->n);
//     if (!ancestor)
//         printf("(nil)\n");
//     else
//         printf("%d\n", ancestor->n);
// }

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_tree_t *root;
    size_t leaves;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    leaves = binary_tree_leaves(root);
    printf("Leaves in %d: %lu\n", root->n, leaves);
    leaves = binary_tree_leaves(root->right);
    printf("Leaves in %d: %lu\n", root->right->n, leaves);
    leaves = binary_tree_leaves(root->left->right);
    printf("Leaves in %d: %lu\n", root->left->right->n, leaves);
    return (0);
}
