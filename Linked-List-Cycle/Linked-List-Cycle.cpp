/*
    #141
    https://leetcode.com/problems/linked-list-cycle/
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// This is Solved using HashTable......

class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> hashTable;
        
        while(head != NULL) {
            if(hashTable.find(head) != hashTable.end()) 
                return true;
            hashTable.insert(head);
            head = head->next;
        }
        
        return false;
    }
};