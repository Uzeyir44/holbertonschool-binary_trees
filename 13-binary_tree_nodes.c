#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child
 * @tree: Pointer to the root node of the tree
 *
 * Return: Number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num = 0;

	if (tree == NULL)
		return (0);

	num += binary_tree_nodes(tree->left);
	num += binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		num += 1;

	return (num);
}
