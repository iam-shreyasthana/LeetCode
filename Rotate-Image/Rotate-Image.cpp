/*
#48
https://leetcode.com/problems/rotate-image/
*/

// We solve this using Transpose Matrix method........

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
     
        int size = matrix.size();
        
        for(int i = 0; i < size; i++){
            for(int j = i; j < size; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }
        
        for(int i = 0; i < size; i++){
            for(int j = 0; j < (size/2); j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][size-1-j];
                matrix[i][size-1-j] = temp;
            }    
        }
        
        
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    s.rotate(matrix);
    int size = matrix.size();
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}