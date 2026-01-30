#include "binary_trees.h"

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