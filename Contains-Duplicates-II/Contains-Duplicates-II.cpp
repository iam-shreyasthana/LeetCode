/*
#219
https://leetcode.com/problems/contains-duplicate-ii/
*/

#include<bits/stdc++.h>
using namespace std;

// Better Solution.... ---> O(nlog n + 2n)

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        int n=nums.size();
        if(k==0){ //edge case.....
            return false;
        }
        vector<pair<int,int>> vect; // vector of Pairs.....
        for(int i=0;i<n;i++){
            vect.push_back(make_pair(nums[i],i));
        }
        // 1,2,3,1
        // 0,1,2,3 index
        sort(vect.begin(),vect.end());
        // 1,1,2,3
        // 0,3,1,2 index
        for(int i=0;i<n-1;i++){
            if((vect[i].first == vect[i+1].first) && (abs(vect[i].second - vect[i+1].second)) <=k){
                return true;
            }
        }
        return false;
    }
};

/*  O(n^3) Complex Solution .............  


class Solution{
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k){
        map<int,int> m;
        int number;
        for(int i = 0; i < nums.size();i++){
            m[nums[i]]++;
        }
        
        for(auto i = m.begin(); i != m.end(); i++){
            if(i->second >= 2){
                number = i->first;
                for(int i = 0; i < nums.size(); i++){
                    if(nums[i] == number){
                        for(int j = nums.size() - 1; j > i; j--){
                            if(nums[j] == number){
                                if(abs(i-j) <= k){
                                    return true;
                                }
                            }
                        }
                    }
                }
            }
        }
        
        
        
        return false;
    }
};

*/
