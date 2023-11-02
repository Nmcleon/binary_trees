#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to the first node.
 * @second: A pointer to the second node.
 *
 * Return: A pointer to the lowest common ancestor node, or NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (!first || !second)
        return (NULL);

    /* If either of the nodes is the root, the root is the LCA. */
    if (first == second)
        return ((binary_tree_t *)first);

    /* Find the lowest common ancestor in the left subtree. */
    binary_tree_t *left_ancestor = binary_trees_ancestor(first, second->parent);

    /* Find the lowest common ancestor in the right subtree. */
    binary_tree_t *right_ancestor = binary_trees_ancestor(first->parent, second);

    /* If both ancestors are not NULL, the LCA is the current node. */
    if (left_ancestor && right_ancestor)
        return ((binary_tree_t *)first);

    /* Otherwise, return the non-NULL ancestor (if any). */
    return (left_ancestor ? left_ancestor : right_ancestor);
}
