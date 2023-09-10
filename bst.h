#ifndef BST_H
#define BST_H

typedef struct BSTNode
{
    int value;
    struct BSTNode *left;
    struct BSTNode *right;
} BSTNode;

typedef enum BSTOrder
{ PREORDER, INORDER, POSTORDER} BSTOrder;

BSTNode* insert(BSTNode*, BSTNode*);
BSTNode* create(int);
BSTNode* find(BSTNode*, int);
BSTNode* removeNode(BSTNode*, int);
BSTNode* deleteBST(BSTNode*);
void traverseBST(BSTNode*, enum BSTOrder);

#endif
