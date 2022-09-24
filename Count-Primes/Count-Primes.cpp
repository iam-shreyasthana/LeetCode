/*
#204
https://leetcode.com/problems/count-primes/
*/

/*
Solved using the method : Sieve of Eratosthenes
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int c = 0;
        if(n == 1 || n == 0){
            return 0;
        }
        
        vector<bool> v(n+1,1);
        v[0] = v[1] = 0;
        for(int i = 2; i < n; i++){
            if(v[i]){
                c++;
                for(int j = 2*i; j < n; j=j+i){
                    v[j] = 0;
                }
            }
        }
        return c;
    }
};

int main(){

    Solution s;
    int n;
    cin >> n;

    cout << s.countPrimes(n) << endl;

    return 0;
}
