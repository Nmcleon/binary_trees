#include "binary_trees.h"

/**
 * binary_tree_height - Measures height of a binary tree
 * @tree: Pointer to root node of the tree
 *
 * Return: Height of the tree (SUCCESS)
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_is_perfect - Check if binary tree is perfect
 * @tree: Pointer to root node of the tree
 *
 * Return: 1 (PERECT), 0 (FAIL)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    if (left_height == right_height)
    {
        if (tree->left == NULL && tree->right == NULL)
            return (1);
        if (tree->left != NULL && tree->right != NULL)
            return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
    }

    return (0);
}
