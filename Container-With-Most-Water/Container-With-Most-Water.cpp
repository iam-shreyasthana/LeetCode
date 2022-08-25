/*
#11
https://leetcode.com/problems/container-with-most-water/
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int firstIndex = 0;
        int lastIndex = height.size() - 1;
        
        int maxArea = 0;
        
        for(int i = firstIndex; i < lastIndex;){
            maxArea = max(maxArea, min(height[firstIndex],height[lastIndex])*(lastIndex-firstIndex));
            if(height[firstIndex] < height[lastIndex]){
                firstIndex++;
            }
            else{
                lastIndex--;
            }
        }
        
        
        
        return maxArea;
        
        
    }
};