/*
#125

https://leetcode.com/problems/valid-palindrome/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    
    bool isValid(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')){
            return 1;
        }
        else{
            return 0;    
        }
        
    }

    char toLowerCase(char ch){
        if((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')){
            return ch;
        }
        else{
            char temp = ch + 32;
            return temp;
        }
    }

    bool checkPalindrome(string s){
        int start = 0;
        int end = s.length() - 1;
        
        while(start <= end){
            if(s[start] != s[end]){
                return 0;
            }
            else{
                start++;
                end--;
            }
        }
        
        return 1;
    }
    
public:
    bool isPalindrome(string s) {
        
        int length = s.length();
        
        string temp = "";
        
        for(int i = 0; i < length; i++){
            if(isValid(s[i])){
                
                temp.push_back(toLowerCase(s[i]));
            }
        }
        
        return checkPalindrome(temp);
        
    }
};

int main(){
    Solution s;
    string str;
    cin >> str;
    cout << "Valid Palindrome : " << s.isPalindrome(str);

    return 0;
}