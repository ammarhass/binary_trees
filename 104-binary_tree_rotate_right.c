#include "binary_trees.h"

/**
 * binary_tree_rotate_right - function that performs a
 * right-rotation on a binary tree
 * @tree: the root node of the tree to rotate
 * Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *ptr;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}

	ptr = tree->left;
	tree->left = ptr->right;

	if (ptr->right != NULL)
	{
		ptr->right->parent = tree;
	}

	ptr->right = tree;
	ptr->parent = tree->parent;
	tree->parent = ptr;
	return (ptr);
}
