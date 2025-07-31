// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        vector<int> ans;
        Node* curr = root;
        while(curr != NULL){
            if(curr->left == NULL){
                ans.push_back(curr->data);
                curr = curr->right;
            }
            else{
            Node* prev = curr->left;
            while(prev->right != NULL && prev->right != curr){
                prev = prev->right;
            }
            if(prev->right == NULL){
                prev->right = curr;
                ans.push_back(curr->data);
                curr = curr->left;
            }
            else {
                prev->right = NULL;
                
                curr=curr->right;
            }

        }
        }
        return ans;
    }
};