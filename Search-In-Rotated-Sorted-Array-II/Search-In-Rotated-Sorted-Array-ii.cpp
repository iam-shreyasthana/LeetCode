/*
    #81. Search in Rotated Sorted Array II
    https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        if(nums.size()==1 && nums[0]!=target) 
            return false;
        if(nums.size()==1 && nums[0]==target) 
            return true;
        
        int size = nums.size();
        int index = nums.size() - 1;
        for(int i = 0; i < size; i++){
            if(i+1<nums.size() && nums[i+1]<nums[i]){
                index = i+1;
                break;
            }
        }
        
        if(target < nums[0]){
            
            int start = index;
            int end = size - 1;
            
            while(start <= end){
                int mid = start + (end - start)/2;
            
                if(nums[mid] == target) 
                    return true;
                else if(nums[mid] >= target)
                    end = mid-1;
                else
                    start = mid + 1;
            }
            
        }
        else{
            int start = 0;
            int end = index;
            
            while(start <= end){
                int mid = start + (end - start)/2;
            
                if(nums[mid] == target) 
                    return true;
                else if(nums[mid] >= target)
                    end = mid-1;
                else
                    start = mid + 1;
            }
        }
        
        return false;
        
    }
};

