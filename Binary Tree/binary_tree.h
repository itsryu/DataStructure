#pragma once

typedef struct Node* Tree;

Tree* createTree();
void freeNode(struct Node* node);
void freeTree(Tree* root);
int isEmpty(Tree* root);
int treeHeight(Tree* root);
int nodeSize(Tree* root);