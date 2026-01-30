#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL)
        return (NULL);

    if (node->parent == NULL)
        return (NULL);

    if (node == node->prent->left)
        return (node->parent->right);
    return (node->parent->left);
}