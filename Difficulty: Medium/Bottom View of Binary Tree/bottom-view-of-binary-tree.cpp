/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution {
  public:
  void helper(Node* root, queue<pair<Node* , int>> q , int line ,   map<int , int> &mpp)
  {
      q.push({root , line});
      while(!q.empty()){
          Node* curr = q.front().first;
          int currline = q.front().second;
          q.pop();
          mpp[currline] = curr->data;
          if(curr->left) q.push({curr->left , currline -1 });
          if(curr->right) q.push({curr->right , currline + 1});
      }
  }
    vector<int> bottomView(Node *root) {
        // Your Code Here
        map<int , int> mpp;
        queue<pair<Node* , int>> q;
        vector<int> ans;
        helper(root , q , 0 , mpp);
        //at the end for storing the final ans
        for(auto it = mpp.begin(); it != mpp.end(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};