#include<bits/stdc++.h>
using namespace std;
int lowerbound(vector<int> nums, int n, int target){
    int low = 0, high = n - 1;
    int ans = n; 
    while(low <= high){
        int mid = (low + high)/2;
        if(nums[mid] >= target){
            ans = mid; 
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>>&matrix, int n, int m){
    int cnt_max = -1; 
    int index = -1;
    for(int i = 0; i < n; i++){
        int cnt_ones = m - lowerbound(matrix[i], m, 1);
        if(cnt_ones > cnt_max){
            cnt_max = cnt_ones;
            index = i;
        }
    }
    return index;
}

int main(){
    int n; 
    int m; 
    cout << "Enter the number of rows in the matrix : ";
    cin >> n;
    cout << "Enter the number of columns in the matrix : ";
    cin >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "Enter the element(" << i<<","<<j << ") : ";
            cin >> matrix[i][j];
        }
    }
    int result = rowWithMax1s(matrix, n, m);
    cout << result << endl;
    return 0;
}