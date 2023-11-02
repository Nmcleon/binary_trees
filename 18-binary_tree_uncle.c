#include "binary_trees.h"

/**
* binary_tree_uncle - Find uncle of a node
* @node: Pointer to node for which to find the uncle
*
* Return: Pointer to uncle node, else NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	return (NULL);
if (node->parent->parent->left == node->parent)
	return (node->parent->parent->right);
return (node->parent->parent->left);
}
