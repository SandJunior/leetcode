#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
 } TreeNode;

int findSecondMinimumValue(struct TreeNode* root);

int main() {
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->val = 2;
    root->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->left->val = 2;
    root->left->left = NULL;
    root->left->right = NULL;
    root->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->val = 5;
    root->right->left = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->left->val = 5;
    root->right->right = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    root->right->right->val = 7;

    int min2 = findSecondMinimumValue(root);
    printf("%d\n", min2);

    free(root->left);
    free(root->right->right);
    free(root->right);
    free(root);

    return 0;
}

int findSecondMinimumValue(struct TreeNode* root) {
    if (root == NULL) return -1;
    if (root->left == NULL && root->right == NULL) return -1;

    int left = root->left->val;
    int right = root->right->val;

    if (root->left->val == root->val) 
        left = findSecondMinimumValue(root->left);
    if (root->right->val == root->val) 
        right = findSecondMinimumValue(root->right);

    if (left != -1 && right != -1) 
        return (left < right) ? left : right;
    else if (left != -1) 
        return left;
    else if (right != -1)
        return right;
    
    return -1;
}
