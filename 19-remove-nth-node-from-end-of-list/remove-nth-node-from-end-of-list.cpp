/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int s = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next;
            s++;
        }
        if(n == s) return head->next;
        temp = head;
        int todelte = s - n - 1;
        while(todelte--){
        temp = temp->next;
        }
      ListNode* toB = temp->next;
      temp->next = toB->next;
      delete(toB);

      return head;
    }
};