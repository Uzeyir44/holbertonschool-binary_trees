#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (tree == NULL)
        return (NULL);

    if (tree->parent == NULL)
        return (NULL);

    if (tree == tree->prent->left)
        return (tree->parent->right);
    return (tree->parent->left);
}