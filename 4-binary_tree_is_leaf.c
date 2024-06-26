#include "binary_trees.h"

/**
 * binary_tree_is_leaf - know if a node is a leaf, means that is the node
 * does not have any child neither left nor right
 * @node: node to check
 * Return: 1 if it is a leaf or 0 if it is not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
