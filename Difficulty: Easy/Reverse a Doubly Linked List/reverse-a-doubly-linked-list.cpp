/*
class Node {
  public:
    int data;
    Node *next;
    Node *prev;
    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

*/
class Solution {
  public:
    Node *reverse(Node *head) {
        // code here
        if(head == NULL || head->next == NULL) return head;
        Node* curr = head;
        Node* prevs = NULL;
        while( curr != NULL ){
            Node *front = curr->next;
            curr->next = prevs;
            curr->prev = front;
             prevs  = curr;
            curr = front;
          
        }
        return prevs;
    }
};