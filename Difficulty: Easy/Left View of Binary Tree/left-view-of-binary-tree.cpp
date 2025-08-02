/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
  void helper(vector<int> &ans, Node *root , int level){
      if(!root) return;
      if(level == ans.size()) ans.push_back(root->data);
      helper(ans , root->left , level + 1 );
      helper(ans , root->right , level + 1);
  }
    vector<int> leftView(Node *root) {
        // code here
        vector<int> ans;
        // int level = 0;
        helper(ans , root , 0);
        return ans;
    }
};