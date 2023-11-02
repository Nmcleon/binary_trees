# binary_trees

## Table of Contents

- [Function Descriptions](#function-descriptions)
- [Usage](#usage)
- [Installation](#installation)
- [Compilation](#compilation)
- [File Descriptions](#file-descriptions)

## Function Descriptions

### Task 0: Pre-order Traversal

`void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`

This function performs a pre-order traversal of a binary tree and applies a given function to each node.

### Task 1: In-order Traversal

`void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`

This function performs an in-order traversal of a binary tree and applies a given function to each node.

### Task 2: Post-order Traversal

`void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`

This function performs a post-order traversal of a binary tree and applies a given function to each node.

### Task 3: Measure Tree Height

`size_t binary_tree_height(const binary_tree_t *tree);`

This function measures the height of a binary tree.

### Task 4: Measure Node Depth

`size_t binary_tree_depth(const binary_tree_t *tree);`

This function measures the depth of a given node in a binary tree.

### Task 5: Measure Tree Size

`size_t binary_tree_size(const binary_tree_t *tree);`

This function measures the size of a binary tree.

### Task 6: Count Leaves

`size_t binary_tree_leaves(const binary_tree_t *tree);`

This function counts the number of leaf nodes in a binary tree.

### Task 7: Count Nodes with Children

`size_t binary_tree_nodes(const binary_tree_t *tree);`

This function counts the number of nodes with at least one child in a binary tree.

### Task 8: Measure Balance Factor

`int binary_tree_balance(const binary_tree_t *tree);`

This function measures the balance factor of a binary tree.

### Task 9: Check for Full Tree

`int binary_tree_is_full(const binary_tree_t *tree);`

This function checks if a binary tree is full, meaning each node has 0 or 2 children.

### Task 10: Check for Perfect Tree

`int binary_tree_is_perfect(const binary_tree_t *tree);`

This function checks if a binary tree is perfect, meaning all leaf nodes are at the same depth.

### Task 11: Find Sibling

`binary_tree_t *binary_tree_sibling(binary_tree_t *node);`

This function finds the sibling of a given node in a binary tree.

### Task 12: Find Uncle

`binary_tree_t *binary_tree_uncle(binary_tree_t *node);`

This function finds the uncle of a given node in a binary tree.

### Task 13: Find Lowest Common Ancestor

`binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second);
`

This function should find the lowest common ancestor of two nodes in a binary tree.

### Task 14: Find Level of Node

`int binary_tree_depth(const binary_tree_t *node);
`

This function should find the level or depth of a specific node in a binary tree.

### Task 15: Check if Binary Tree is Perfect

`int binary_tree_is_perfect(const binary_tree_t *tree);
`

This function should check if a binary tree is perfect, meaning all leaf nodes are at the same depth, and the tree is full.

### Task 16: Create a Sorted Array from Binary Search Tree (BST)

`int *tree_to_array(const binary_tree_t *tree, int *n);
`

This function should create an array of integers from a binary search tree (BST) in sorted order.

### Task 17: Create a Balanced Binary Search Tree from Sorted Array

`binary_tree_t *sorted_array_to_avl(int *array, size_t size);
`

This function should create a balanced binary search tree (AVL tree) from a sorted array of integers.

### Task 18: Check if Binary Tree is AVL Tree

`int binary_tree_is_avl(const binary_tree_t *tree);
`

This function should check if a given binary tree is an AVL tree, which means it is a balanced binary search tree.


## Usage

To use these functions, you can include the provided header file `binary_trees.h` in your C source code and implement the functions as needed. For each task, there is an associated `.c` file that you can compile and link with your code.

You can also test the functions using the provided test programs like `main` functions in the source code files.


## Compilation

Example of how you can compile the source files with your C program using the following command:

```bash
gcc -Wall -Wextra -Werror -pedantic binary_tree_print.c 0-main.c 0-binary_tree_node.c -o 0-node
```

Make sure to replace `your-program.c` with the name of your source code file.

## File Descriptions

- `binary_trees.h`: Header file containing function prototypes and structure definitions.
- `0-binary_tree_node.c` and `2-binary_tree_insert_left.c` or `2-binary_tree_insert_right.c`: Source files for functions to create and insert nodes into a binary tree.
- `binary_tree_print.c`: Helper function to print a binary tree structure.
- `0-binary_tree_node.c` to `12-binary_tree_uncle.c`: Source files for each task.
- `main.c`: Test programs to demonstrate the functions. [main files havent been pushed]

## Author

This project was developed by Noah K for the purpose of practicing data structures and algorithms in C.
