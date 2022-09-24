/*
    #229 Majority Element II
    https://leetcode.com/problems/majority-element-ii/
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        map<int,int> m;
        
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        
        for(auto it:m){
            if(it.second > n/3){
                result.push_back(it.first);
            }
        }
        
        return result;
    }
};