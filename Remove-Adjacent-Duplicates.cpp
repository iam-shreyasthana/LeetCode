/*
#1047
Remove All Adjacent Duplicates In String
https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        int j = 0;
        while(j+1 < s.length()){
            if(s[j] == s[j+1]){
                s.erase(j,2);
                j--;
                j = max(0,j);
            }
            else{
                j++;
            }
        }-
        return s;
    }
};

int main(){
    Solution obj;
    string s;
    cin >> s;
    cout << obj.removeDuplicates(s) << endl;

    return 0;
}