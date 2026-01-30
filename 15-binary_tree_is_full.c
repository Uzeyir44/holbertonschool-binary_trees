#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
    int left_check;
    int right_check;

    if (tree == NULL)
        return (0);

    left_check = binary_tree_is_full(tree->left);
    right_check = binary_tree_is_full(tree->right);

    if (left_check == 0 && right_check == 0 || left_check == 1 && right_check == 1)
        return (1);
    return(0);
}