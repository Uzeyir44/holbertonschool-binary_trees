#include "binary_trees.h"
#include <stdio.h>
#include <stddef.h>

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
        return (0)

    while (tree->parent != 0)
    {
        depth++;
        tree = tree->parent;
    }

    return (depth);
}