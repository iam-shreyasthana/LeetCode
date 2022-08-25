/*
#567
https://leetcode.com/problems/permutation-in-string/
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
private:
    bool checkEqual(int a[26], int b[26]){
        for(int i = 0; i < 26; i++){
            if(a[i] != b[i]){
                return 0;
            }
        }
        
        return 1;
    }
public:
    bool checkInclusion(string s1, string s2) {
        
        int count1[26] = {0};
        
        //filling the count1 array with count of characters in string s1.....
        for(int i = 0; i < s1.length(); i++){
            int index = s1[i] - 'a';
            count1[index]++;
        }
        
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};
        
        //First window process......
        while(i < windowSize && i < s2.length()){
            
            int index = s2[i] -'a';
            count2[index]++;
            i++;
        }
        //check for if the arrays are equal then a permutation is found.....
        if(checkEqual(count1,count2)){
            return 1;
        }
        
        //Forward window traversal or windows slides forward to check other characters....
        while(i < s2.length()){
            
            //adding new character to the count2 array......
            char newChar = s2[i];
            int index = newChar - 'a';
            count2[index]++;
            
            //removing the old character
            char oldChar = s2[i-windowSize];
            index = oldChar - 'a';
            count2[index]--;
            
            i++;
            
            if(checkEqual(count1,count2)){
                return 1;
            }
        }
        
        return 0;
    }
};

int main(){
    Solution obj;
    string s1,s2;
    cin >> s1;
    cin >> s2;
    if(obj.checkInclusion(s1, s2)){
        cout << "Permutation Found" << endl;
    }
    else{
        cout << "Permutation Not Found" << endl;
    }

    return 0;
}
