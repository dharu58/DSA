#include<bits/stdc++.h>
using namespace std; 

int low_bound(vector<int> &nums,int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if (nums[mid] >= x){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n; 
    cout << "Enter the number of elements in the array : "; 
    cin >> n ; 
    vector<int> nums(n); 
    for(int i = 0;i < n; i++){
        cout << "Enter the element " << i << " : ";
        cin >> nums[i];
    }
    int x;
    cout << "Enter the element that you want to find : ";
    cin >> x;
    int result = low_bound(nums,n,x);
    cout << result;
    return 0;
}