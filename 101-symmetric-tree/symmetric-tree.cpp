/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool helper(TreeNode * rootL , TreeNode* rootR){
     if(!rootL && !rootR) return true;
     if(!rootL || !rootR) return false;
     if (!(rootL->val == rootR->val) ||
     !helper(rootL->left , rootR->right)||
     !helper(rootL->right , rootR->left)) return false;

     return true;
    
}
    bool isSymmetric(TreeNode* root) {
        if(!root) return true;
        return helper(root->left , root->right);
    }
};