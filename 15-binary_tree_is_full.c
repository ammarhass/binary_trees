#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if binary tree is full
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (!tree)
		return (0);

	height_left = tree->left ? 1 + binary_tree_is_full(tree->left) : 0;
	height_right = tree->right ? 1 + binary_tree_is_full(tree->right) : 0;
	return (height_left == height_right);
}
