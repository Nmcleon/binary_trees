#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: A pointer to first node.
 * @second: A pointer to second node.
 *
 * Return: pointer to the lowest common ancestor node, or NULL if not found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *parent, *child;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	parent = first->parent, child = second->parent;
	if (first == child || !parent || (!parent->parent && child))
		return (binary_trees_ancestor(first, child));
	else if (parent == second || !child || (!child->parent && parent))
		return (binary_trees_ancestor(parent, second));
	return (binary_trees_ancestor(parent, child));
}
