#include <stdio.h>
#include <stdlib.h>

#include "binary_tree.h"

struct Node {
    int info;
    struct Node* left;
    struct Node* right;
};

Tree* createTree() {
    Tree* root = (Tree*) malloc(sizeof(Tree));

    if(root != NULL) *root == NULL;

    return root;
}

void freeTree(Tree* root) {
    if(root == NULL) return;

    
}

int main(void) {
    Tree* root = createTree();
    return 0;
}