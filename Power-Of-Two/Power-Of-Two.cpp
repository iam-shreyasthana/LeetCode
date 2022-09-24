/*
231. Power of Two

Given an integer n, return true if it is a power of two. 
Otherwise, return false.

An integer n is a power of two, 
if there exists an integer x such that n == 2x.

Follow up: Could you solve it without loops/recursion?

*/
#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        int ans = 1;
        for (int i = 0; i<=30; i++){ 
            if(ans == n){
                return true;
            }
            if(ans < INT_MAX/2){
                ans = ans * 2;
            }
        }
        return false;
    }
};

int main(){
    int n;
    cin>>n;
    Solution s;
    bool ans = s.isPowerOfTwo(n);
    cout<<ans;
}
