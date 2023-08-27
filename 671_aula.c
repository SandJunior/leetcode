struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
 } TreeNode;

int findSecondMinimumValue(struct TreeNode* root) {
    struct TreeNode *root = malloc(sizeof(struct TreeNode));

    root->val = root;
    root->left = NULL;
    root->right = NULL;

    if (root->val == NULL || root->val < 0) {
        return 1;
    }

    else if (root->left == NULL && root->right == NULL) {
        for ( int i = 0 ; i < root ; root->left ) {
            return min(root->left, );
            for ( int j = 0 ; j < root ; root->right) {
                return min(root->right, );
            }
        }
    }
}
