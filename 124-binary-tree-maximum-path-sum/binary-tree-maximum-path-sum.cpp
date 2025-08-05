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
int helper(TreeNode* root , int &maxi){
    if(!root) return 0;
    int left =  helper(root->left, maxi);
    int right =  helper(root->right , maxi);

     maxi = max(maxi , left + right + root->val);

     return (root->val + max(left  , right)) < 0 ? 0 : root->val + max(left  , right);
}
    int maxPathSum(TreeNode* root) {
        if(!root) return 0;
        int maxi = INT_MIN;
        helper(root , maxi);
        return maxi;
    }
};