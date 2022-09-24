
/*
    #25
    https://leetcode.com/problems/reverse-nodes-in-k-group/
*/

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head == NULL||head->next == NULL) return head;
        
        ListNode* temp = new ListNode(0);
        
        temp -> next = head;
        
        int len = 0;
        ListNode* t = head;
        while(t != NULL){
            len++;
            t = t->next;
        }
        
        ListNode* prev;
        ListNode* curr;
        ListNode* nextt;
        
        prev = temp;
        
        while(k <= len){
            curr = prev->next;
            nextt = curr->next;
            int i = 1;
            while(i < k){
                curr->next = nextt->next;
                nextt->next = prev->next;
                prev->next = nextt;
                nextt = curr->next;
                i++;
            }
            len = len - k;
            prev = curr;
            
        }
        
        return temp->next;
    }
};