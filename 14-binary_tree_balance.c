#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a balance tree
 * @tree: tree to be parsed
 * Return: the height
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t a = 0;
	size_t b = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			a = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			b = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((a > b) ? a : b);
	}
}

/**
 * binary_tree_balance - measures balance factor of a binary tree
 * @tree: tree to be parsed
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
