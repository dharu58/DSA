#include<bits/stdc++.h>
using namespace std; 

int noofrotated(vector<int> &nums){
    int low = 0, high = nums.size() -1 ; 
    int index = -1; 
    int ans = INT_MAX;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[low] <= nums[high]){
            if(nums[low] < ans){
                index = low; 
                ans= nums[low];
            }
            break;
        }
        if(nums[low] <= nums[mid]){
            if(nums[low] < ans){
                index = low; 
                ans = nums[low];
            }
            low = mid+1;
        }else{
            high = mid - 1; 
            if(nums[mid] < ans){
                index = mid; 
                ans = nums[mid];
            }
            high = mid - 1; 
        }
    }
    return index;
}

int main(){
    int n; 
    cout << "Enter the number of elements in the array : ";
    cin >> n; 
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the element in " << i << " : ";
        cin >> nums[i];
    }
    int result = noofrotated(nums);
    cout << "the array is rotated : " << result << endl;
    return 0;
}