/*
#74
https://leetcode.com/problems/search-a-2d-matrix/
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row*col - 1;
        int mid = start + (end - start)/2;
        
        while(start <= end){
            int el = matrix[mid/col][mid%col];
            
            if(el == target){
                return 1;
            }
            
            if(el > target){
                end = mid - 1;
            }
            
            else{
                start = mid+1;
            }
            
            mid = start + (end - start)/2;
        }
        
    }
};

int main(){
    Solution s;
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;

    cout << s.searchMatrix(matrix,target) << endl;

    return 0;
}
