/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool hasPathSum(struct TreeNode* root, int targetSum){
    if (root == NULL) {
        return 0;
    }

    if (root->left == NULL && root->right == NULL) {
        return targetSum - root->val == 0;
    }
    bool l = hasPathSum(root->left, targetSum - root->val);
    bool r = hasPathSum(root->right, targetSum - root->val);

    return l || r;
}
