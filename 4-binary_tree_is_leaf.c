#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to node to check
 *
 * Return: 1 (SUCCESS), 0 (Not)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    if (node == NULL)
        return (0);

    return (node->left == NULL && node->right == NULL);
}
