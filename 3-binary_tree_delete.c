#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree : pointer to the root node of tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *left_child;
	binary_tree_t *right_child;

	if (tree != NULL)
	{
		left_child = tree->left;
		right_child = tree->right;
		free(tree);
		binary_tree_delete(left_child);
		binary_tree_delete(right_child);
	}
}
