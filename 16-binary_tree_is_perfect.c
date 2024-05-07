#include "binary_trees.h"
/**
 * check_if_tree_is_perfect - functions that chekcs if a tree is perfect or not
 * @tree: pointer to the root node of the tree to check
 * Return: 1 or 0
 */

int check_if_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
       	int right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + check_if_tree_is_perfect(tree->left);
		right = 1 + check_if_tree_is_perfect(tree->right);
		if (right == left && right != 0 && left != 0)
			return (right);
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 is it is or 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i = 0;

	if (tree == NULL)
	{
		return (0);
	}

	else
	{
		i = check_if_tree_is_perfect(tree);
		if (i != 0)
			return (1);
		return (0);
	}
}
