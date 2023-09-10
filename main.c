#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

int main()
{
    int numberNodes = 0;
    int nodeValue = 0;
    int choice = 0;
    BSTNode* root = NULL;
    BSTNode* newNode;
    printf("Enter the number of nodes for the tree: ");
    scanf("%d", &numberNodes);

    for (int i = 0; i < numberNodes; i++)
    {
        printf("Enter a node value: ");
        scanf("%d", &nodeValue);
        newNode = create(nodeValue);
        root = insert(root, newNode);
    }
    printf("Enter the order for traversal and printing (0-Preorder, 1-Inorder, 2-Postorder): ");
    scanf("%d", &choice);
    if (choice == 0)
    {
        traverseBST(root, PREORDER);
    }
    else if (choice == 1)
    {
        traverseBST(root, INORDER);
    }
    else
    {
        traverseBST(root, POSTORDER);
    }
    deleteBST(root);
    return 0;
}
