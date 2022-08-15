/*
#442
https://leetcode.com/problems/find-all-duplicates-in-an-array/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int,int> m;
        int n = nums.size();
        vector<int> v;
        
        for(int i = 0; i < n; i++){
            m[nums[i]]++;
        }
        
        for(auto i = m.begin(); i != m.end(); i++){
            if(i->second == 2){
                v.push_back(i->first);
            }
        }
        
        return v;
    }
};
