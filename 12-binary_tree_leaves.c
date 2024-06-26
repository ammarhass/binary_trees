#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in binary tree
 * @tree: Pointer to root of binary tree
 *
 * Return: the number of leaves in binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
