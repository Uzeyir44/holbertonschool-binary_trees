#include "binary_trees.h"
#include <stddef.h>

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree == NULL)
		return (0);

	num += binary_tree_leaves(tree->left);
	num += binary_tree_leaves(tree->right);

	if (tree->left == NULL && tree->right == NULL)
		num = 1;

	return (num);
}
