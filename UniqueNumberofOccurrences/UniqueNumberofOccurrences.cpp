/*
#1207

https://leetcode.com/problems/unique-number-of-occurrences/

Explanation:

This problem is solved using map and set.
As we know that set stores only unique values, so as we store the number of occurences of
each value in map, we store the value or number of occurences in set, therefore set will
only store the unique values so then we compare that if the elements in map is equal
to the number of elements in set........
Agar map me kisi value ki occurence same hui toh fir set me sirf single value hi jayegi
aur fir set ki length of map ki length equal nahi aayegi aur isse ye pata lagega ki
unique occurences nahi the vector ya list me.....

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        int n = arr.size();
        
        set<int> s;
        map<int,int>m;
        for(int i = 0; i < n; i++){
            m[arr[i]]++;
        }
        
        for(auto& i : m){
            s.insert(i.second);
        }
        
        if(s.size() == m.size()){   // This is the important comparison.....
            return true;
        }
        
        return false;
        
    }
};

int main(){
    Solution s;
    int testCases;
    cin >> testCases;
    while(testCases--){
        int n;
        cin >> n;
        vector<int> v;
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            v.push_back(a);
        }
        bool ans = s.uniqueOccurrences(v);

        cout << ans << endl;
    }

    return 0;
}

