struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
 } TreeNode;

/*
====================
findSecondMinimumValue
 Função que procura um segundo menor valor na árvore, 
 caso o contrário, retorna -1.
====================
*/

int findSecondMinimumValue ( struct TreeNode* root ) {
    
    if ( root == NULL ) return -1;
    if ( root->left == NULL && root->right == NULL ) return -1;

    int left = root->left->val;
    int right = root->right->val;

    if ( root->left->val == root->val ) {
        left = findSecondMinimumValue( root->left );
    }
    if ( root->right->val == root->val ) {
        right = findSecondMinimumValue( root->right );
    }

    if ( left != -1 && right != -1 ) {
        return ( left < right ) ? left : right;
    }
    else if ( left != -1 ) {
        return left;
    }
    else if ( right != -1 ) {
        return right;
    }
    
    return -1;
}
