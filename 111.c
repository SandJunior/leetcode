/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root){
    if (root == NULL) {
        return 0;
    }

    int x = minDepth(root->left);
    int y = minDepth(root->right);
    
    if (!root->left && !root->right) {
        return 1;
    }
    
    if(!root->left) {
        return y+1;
    }
    
    if(!root->right) {
        return x+1;
    }
    return x > y ? y+1 : x+1;

}
