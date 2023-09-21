/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void flatten(struct TreeNode* root){
    if (root != NULL){
        struct TreeNode* temp = root->right; 
        root->right = root->left;           
        root->left = 0;                  
        
        struct TreeNode* current = root;
        while(current->right) {
            current = current->right;
        }
        current->right = temp;                 
        flatten(root->right);
    }
}
