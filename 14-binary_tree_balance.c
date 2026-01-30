#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->parent == NULL)
	{
		if (left_height > right_height)
			return (left_height);
		return (right_height);
	}

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height;
    int right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (left_height - right_height);
}