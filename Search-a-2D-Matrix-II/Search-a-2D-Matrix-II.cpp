/*
#240
https://leetcode.com/problems/search-a-2d-matrix-ii/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int columnIndex = col - 1;
        
        while(rowIndex < row && columnIndex >= 0){
            int el = matrix[rowIndex][columnIndex];
            
            if(el == target){
                return 1;
            }
            
            if(el < target){
                rowIndex++;
            }
            
            else{
                columnIndex--;
            }
            
        }  
        return 0;
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},
                                        {10,13,14,17,24},{18,21,23,26,30}};
    
    int target = 5;

    cout << s.searchMatrix(matrix, target);

    return 0;
}
