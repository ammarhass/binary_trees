#include "binary_trees.h"

/**
 * binary_trees_ancestor - function that finds
 * the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *ptr1, *ptr2;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}

	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	ptr1 = first->parent;
	ptr2 = second->parent;

	if (ptr1 == NULL || first == ptr2 || (!ptr1->parent && ptr2))
	{
		return (binary_trees_ancestor(first, ptr2));
	}

	else if (ptr2 == NULL || ptr1 == second || (!ptr2->parent && ptr1))
	{
		return (binary_trees_ancestor(ptr1, second));
	}

	return (binary_trees_ancestor(ptr1, ptr2));
}
