#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts nodes with at least 1 child in a binary tree
 * @tree: Pointer to root node of the tree to count nodes
 *
 * Return: number of nodes with at least 1 child in tree, 0 == NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    if (tree->left || tree->right)
        return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

    return (0);
}
