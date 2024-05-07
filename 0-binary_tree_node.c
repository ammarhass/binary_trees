#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: Pointer to the parent node being created
 * @value: value to put the new node
 *
 * Return: Pointer to the new node, or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	ptr = malloc(sizeof(binary_tree_t));
	if (!ptr)
		return (NULL);
	ptr->n = value;
	ptr->parent = parent;
	ptr->left = NULL;
	ptr->right = NULL;
	return (ptr);
}
