/*
#189
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            temp.push_back(0);
        }
        for(int i = 0; i < n; i++){
            temp[(i+k)%n] = nums[i];
        }
        
        for(int i = 0; i < n; i++){
            nums[i] = temp[i];
        }
    }
};

int main(){
    Solution s;
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    s.rotate(v, k);

    cout << "Vector after rotating by " << k << " :" << endl;
    for(int i = 0; i < n; i++){
        
        cout << v[i] << " ";
    }

    return 0;
}