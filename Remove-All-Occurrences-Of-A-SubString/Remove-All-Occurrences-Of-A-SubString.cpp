/*
#1910
https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        while(s.length()!=0 && s.find(part) < s.length()) {
            s.erase(s.find(part), part.length());
        }
        return s;
    }
};

int main(){
    Solution obj;
    string s;
    cin >> s;
    string part;
    cin >> part;
    cout << obj.removeOccurrences(s,part);

    return 0;
}
