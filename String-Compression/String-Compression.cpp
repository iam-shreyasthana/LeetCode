/*
#443
https://leetcode.com/problems/string-compression/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int ansIndex = 0;
        int n = chars.size();
        
        while(i < n){
            int j = i + 1;
            
            while(j < n && chars[i] == chars[j]){
                
                j++;
                
            }
            // Yahan pr tab aayenge jab vect0or poora traverse


            chars[ansIndex++] = chars[i];
            
            int count = j - i;
            
            if(count > 1){
                string cnt = to_string(count);
                for(char ch : cnt){
                    chars[ansIndex++] = ch;
                }
            }
            i = j;
        }
        
        return ansIndex;
    }
};

int main(){
    Solution obj;
    int n;
    char chars[n];
    for(int i = 0; i < n; i++){
        cin >> chars[i];
    }

    cout << obj.compress(chars) << endl;

    return 0;
}