/*
    #403. Frog Jump
    https://leetcode.com/problems/frog-jump/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canCross(vector<int>& stones) {
        
        int destination = stones[stones.size() - 1];
        
        unordered_map<int, unordered_set<int>> jumpsMap;
        
        for(auto stone : stones){
            jumpsMap[stone] = {};
        }
        
        jumpsMap[stones[0]] = {1};
            
        for(int i = 0; i < stones.size(); i++){
            
            int currentStone = stones[i];
            
            unordered_set<int> validJumps = jumpsMap[currentStone];
            
            for(auto jump: validJumps){
                int nextPosition = currentStone + jump;
                if(nextPosition == destination){
                    return true;
                }
                
                if(jumpsMap.find(nextPosition) != jumpsMap.end()){
                    if(jump - 1 > 0){
                        jumpsMap[nextPosition].insert(jump-1);
                    }
                    jumpsMap[nextPosition].insert(jump);
                    jumpsMap[nextPosition].insert(jump+1);
                }
                
            }
            
            
        }
        
        return false;
        
    }
};