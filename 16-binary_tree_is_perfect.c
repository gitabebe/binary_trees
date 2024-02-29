#include "binary_trees.h"


/**
 * binary_tree_size -  measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size or 0 If tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size_L = 0, size_R = 0;

	if (tree == NULL)
		return (0);

	size_L = binary_tree_size(tree->left) + 1;
	size_R = binary_tree_size(tree->right);

	return (size_L + size_R);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 or 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_size(tree) > 0)
		return (1);
	else
		return (0);
}
