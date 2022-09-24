/*
    #817
    https://leetcode.com/problems/linked-list-components/
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
    int numComponents(ListNode* head, vector<int>& nums) {
        
        int count = 0;
        
        set<int> s;
        
        for(int i = 0; i < nums.size(); i++){
            s.insert(nums[i]);
        }
        
        bool flag = false;
        
        while(head){
            int x = head -> val;
            
            if(s.count(x)){
                if(flag == false){
                    count++;
                }
                flag = true;
            }
            else{
                flag = false;
                
            }
            head = head->next;
        }
        
        return count;
    }
};