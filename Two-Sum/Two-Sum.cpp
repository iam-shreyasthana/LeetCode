/*
    #1 Two Sum
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        vector<int> temp;
        
        for(int i = 0; i < n; i++){
            for(int k = i+1; k < n; k++){
                if(nums[i]+nums[k] == target){
                    temp.push_back(i);
                    temp.push_back(k);
                    return temp;
                }
                if(temp.size() == 2){
                    break;
                }
            }
        }
        
        return temp;
    }
};