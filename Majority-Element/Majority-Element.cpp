/*
    #169 Majority Element
    https://leetcode.com/problems/majority-element/
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        int findMax = INT_MIN;
        int el;
        for(auto it:m){
            if(findMax < it.second){
                findMax = max(findMax, it.second);
                el = it.first;
            }
            
        }
        
        if(findMax > n/2){
            return el;
        }
        
        return 0;
    }
};