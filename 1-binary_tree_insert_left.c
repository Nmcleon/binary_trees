#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert a node as the left-child of another node
 * @parent: Pointer to node to insert the left-child
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, NULL(FAIL)/if parent == NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
    if (new_node == NULL)
        return (NULL);

    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    parent->left = new_node;
    return (new_node);
}
