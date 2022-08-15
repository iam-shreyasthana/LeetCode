/*
#26
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = nums.size();
        for(int i = 1; i < l; i++){
            if(nums[i] == nums[i-1]){
                nums.erase(i);
            }
        }
        
        int k = nums.size();
        
        return k;
    }
};

int main(){
    Solution s;
    vector<int> v = {1,1,2};
    cout << s.removeDuplicates(v) << endl;

    return 0;
}