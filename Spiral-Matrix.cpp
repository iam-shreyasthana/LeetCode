/*
#54
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        int col = matrix[0].size();
        vector<int> v;
        
        int startRow = 0;
        int startCol = 0;
        int endRow = row - 1;
        int endCol = col - 1;
        
        int c = 0;
        int total = row*col;
        
        while(c < total){
            
            for(int i = startCol; c < total && i <= endCol; i++){
                v.push_back(matrix[startRow][i]);
                c++;
            }
            startRow++;
            
            
            for(int i = startRow; c < total && i <= endRow; i++){
                v.push_back(matrix[i][endCol]);
                c++;
            }
            endCol--;
            
            for(int i = endCol; c < total && i >= startCol; i--){
                v.push_back(matrix[endRow][i]);
                c++;

            }
            endRow--;
            
            for(int i = endRow; c < total && i >= startRow; i--){
                v.push_back(matrix[i][startCol]);
                c++;

            }
            startCol++;
        }
        return v;
    }
};

int main(){
    Solution obj;
    int m,n;
    cin >> m >> n;
    vector<vector<int>> v;
    // Taking input for vector matrix from the user.....
    for(int i = 0; i < m; i++){
        vector<int> temp;
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            temp.push_back(a);
        }
        v.push_back(temp);
        temp.clear();
    }

    vector<int> k = obj.spiralOrder(v);
    for(int i = 0; i < v.size() * v[0].size(); i++){
        cout << k[i] << " ";
    }

    return 0;
}
