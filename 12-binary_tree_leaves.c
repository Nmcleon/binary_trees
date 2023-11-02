#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts leaves in a binary tree
 * @tree: Pointer to root node of the tree to count leaves
 *
 * Return: number of leaves in the tree, 0 == NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
