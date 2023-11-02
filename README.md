# binary_trees

## Table of Contents

- [Function Descriptions](#function-descriptions)
- [Usage](#usage)
- [Installation](#installation)
- [Compilation](#compilation)
- [File Descriptions](#file-descriptions)

## Function Descriptions

### Task 0: New node (0-binary_tree_node.c)

**Description:**
Create a binary tree node and return a pointer to it.

**Prototype:**
```c
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
```

### Task 1: Insert left (1-binary_tree_insert_left.c)

**Description:**
Insert a node as the left-child of another node.

**Prototype:**
```c
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
```

### Task 2: Insert right (2-binary_tree_insert_right.c)

**Description:**
Insert a node as the right-child of another node.

**Prototype:**
```c
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
```

### Task 3: Delete (3-binary_tree_delete.c)

**Description:**
Delete an entire binary tree.

**Prototype:**
```c
void binary_tree_delete(binary_tree_t *tree);
```

### Task 4: Is leaf (4-binary_tree_is_leaf.c)

**Description:**
Check if a node is a leaf.

**Prototype:**
```c
int binary_tree_is_leaf(const binary_tree_t *node);
```

### Task 5: Is root (5-binary_tree_is_root.c)

**Description:**
Check if a given node is a root.

**Prototype:**
```c
int binary_tree_is_root(const binary_tree_t *node);
```

### Task 6: Pre-order traversal (6-binary_tree_preorder.c)

**Description:**
Traverse a binary tree using pre-order traversal.

**Prototype:**
```c
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
```

### Task 7: In-order traversal (7-binary_tree_inorder.c)

**Description:**
Traverse a binary tree using in-order traversal.

**Prototype:**
```c
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
```

### Task 8: Post-order traversal (8-binary_tree_postorder.c)

**Description:**
Traverse a binary tree using post-order traversal.

**Prototype:**
```c
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
```

### Task 9: Height (9-binary_tree_height.c)

**Description:**
Determine the height of a binary tree.

**Prototype:**
```c
size_t binary_tree_height(const binary_tree_t *tree);
```

### Task 10: Depth (10-binary_tree_depth.c)

**Description:**
Determine the depth of a given node in a binary tree.

**Prototype:**
```c
size_t binary_tree_depth(const binary_tree_t *tree);
```

### Task 11: Size (11-binary_tree_size.c)

**Description:**
Determine the size of a binary tree.

**Prototype:**
```c
size_t binary_tree_size(const binary_tree_t *tree);
```

### Task 12: Leaves (12-binary_tree_leaves.c)

**Description:**
Determine the number of leaves in a binary tree.

**Prototype:**
```c
size_t binary_tree_leaves(const binary_tree_t *tree);
```

### Task 13: Nodes (13-binary_tree_nodes.c)

**Description:**
Determine the number of nodes with at least one child in a binary tree.

**Prototype:**
```c
size_t binary_tree_nodes(const binary_tree_t *tree);
```

### Task 14: Balance factor (14-binary_tree_balance.c)

**Description:**
Determine the balance factor of a binary tree.

**Prototype:**
```c
int binary_tree_balance(const binary_tree_t *tree);
```

### Task 15: Is full (15-binary_tree_is_full.c)

**Description:**
Check if a binary tree is full.

**Prototype:**
```c
int binary_tree_is_full(const binary_tree_t *tree);
```

### Task 16: Rotate left (16-binary_tree_rotate_left.c)

**Description:**
Perform a left-rotation on a binary tree.

**Prototype:**
```c
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
```

### Task 17: Rotate right (17-binary_tree_rotate_right.c)

**Description:**
Perform a right-rotation on a binary tree.

**Prototype:**
```c
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
```

### Task 18: Is perfect (18-binary_tree_is_perfect.c)

**Description:**
Check if a binary tree is perfect.

**Prototype:**
```c
int binary_tree_is_perfect(const binary_tree_t *tree);
```

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
