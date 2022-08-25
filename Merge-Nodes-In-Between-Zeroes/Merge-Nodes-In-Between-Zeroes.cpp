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
    ListNode* mergeNodes(ListNode* head) {
        
        head  = head->next;
        
        ListNode* p = head;
        
        while(p){
            ListNode* end = p;
            int sum = 0;
            while(end->val != 0){
                sum+= end->val;
                end = end->next;
            }
            
            p->val = sum;
            
            p->next = end->next;
            
            p = p->next;
        }
        
        return head;
    }
};