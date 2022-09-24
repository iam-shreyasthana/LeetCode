/*
    #53. Maximum Subarray
    https://leetcode.com/problems/maximum-subarray/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = 0;
        int findMax = INT_MIN;
        
        for(int i = 0; i < nums.size(); i++){
            
            result += nums[i];
            
            if(findMax < result){
                findMax = result;
            }
            
            if(result < 0){
                result = 0;
            }
            
        }
        
        return findMax;
    }
};