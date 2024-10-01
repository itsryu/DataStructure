#include <stdio.h>
#include <stdlib.h>

#include "binary_tree.h"

struct Node {
    int info;
    struct Node* left;
    struct Node* right;
};

int main(void) {
    Tree* root = createTree();

    if(isEmpty(root)) printf("Tree is empty\n");
    else printf("Tree is not empty\n");

    freeTree(root);
    return 0;
}

Tree* createTree() {
    Tree* root = (Tree*) malloc(sizeof(Tree));

    if(root != NULL) *root = NULL;

    return root;
};

void freeNode(struct Node* node) {
    if(node == NULL) return;

    freeNode(node->left);
    freeNode(node->right);
    free(node);
    node = NULL;
};

void freeTree(Tree* root) {
    if(root == NULL) return;

    freeNode(*root);

    free(root);    
};

// Verify if the tree is empty or not;
int isEmpty(Tree* root) {
    if(root == NULL) return 1;
    if(*root == NULL) return 1;

    return 0;
};


// Calculate the height of the tree;
int treeHeight(Tree* root) {
    if(root == NULL) return 0;
    if(*root == NULL) return 0;

    int leftHeight = treeHeight(&((*root)->left));
    int rightHeight = treeHeight(&((*root)->right));

    if(leftHeight > rightHeight) return (leftHeight + 1);
    else return (rightHeight + 1);
};

// Calculate the node count of the tree;
int nodeSize(Tree* root) {
    if (root == NULL) return 0;
    if (*root == NULL) return 0;

    int leftSize = nodeSize(&((*root)->left)); // left subtree size
    int rightSize = nodeSize(&((*root)->right)); // right subtree size

    return (leftSize + rightSize + 1); // adding 1 for the root node
};