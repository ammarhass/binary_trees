#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right_child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: return a pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr;

	if (!parent)
		return (NULL);
	ptr = binary_tree_node(parent, value);
	if (!ptr)
		return (NULL);

	if (parent->right)
	{
		parent->right->parent = ptr;
		ptr->right = parent->right;
	}
	parent->right = ptr;
	return (ptr);
}
