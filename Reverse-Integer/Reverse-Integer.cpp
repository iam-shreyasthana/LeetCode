/*

7. Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed.
If reversing x causes the value to go outside
the signed 32-bit integer range [-231, 231 - 1], then return 0.

*/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x){
            int digit = x % 10;
            x = x/10;
            if( (rev > INT_MAX/10) || (rev < INT_MIN/10)){
                return 0;
            }
            rev = (rev * 10) + digit;
            
        }
        return rev;
    }
};

int main(){
    Solution s;
    int n;
    cin>>n;
    int ans = s.reverse(n);
    cout<<ans;
}
