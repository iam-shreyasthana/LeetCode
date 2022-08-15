/*
#88
https://leetcode.com/problems/merge-sorted-array/
*/
// This problem is solved using Insertion Sort Technique.......

class Solution {
private:
    void insertionSort(int n, vector<int>& arr){
        for(int i = 1; i < n; i++){
            int temp = arr[i];
            int j;
            for(j = i - 1; j >= 0; j--){
                if(arr[j] > temp){
                    arr[j+1] = arr[j];
                }
                else{
                    break;
                }
            }
            
            arr[j+1] = temp;
        }
    }
public:
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int j = 0;
        for(int i = m; i < m+n; i++){
                    
            nums1[i] = nums2[j];
            j++;
            
        }
        
        insertionSort(m+n, nums1);

    }
};

int main(){
    Solution s;
    vector<int> v1;
    vector<int> v2;
    int m,n;
    cin >> m >> n;
    cout << "Enter Vector 1 :" << endl;
    for(int i = 0; i < m; i++){
        int a;
        cin >> a;
        v1.push_back(a);
    }

    for(int i = m; i < m+n; i++){
        v1.push_back(0);
    }

    cout << "Enter Vector 2 :" << endl;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        v2.push_back(a);
    }

    merge(v1, m, v2, n);

    cout << "Vector after Merging : " << endl;
    for(int i = 0; i < n; i++){
        
        cout << v1[i] << " ";

    }
}

