#include "binary_trees.h"

/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, a = 0, b = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		a = binary_tree_leaves(tree->left);
		b = binary_tree_leaves(tree->right);
		leaf = a + b;
		return ((!a && !b) ? leaf + 1 : leaf + 0);
	}
}
