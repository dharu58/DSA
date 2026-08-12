#include <bits/stdc++.h>
using namespace std;

int merge(vector<int> &nums, int low, int mid, int high){
    vector<int> temp;
    int left = low; 
    int right = mid+1;
    int cnt = 0; 
    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }else{
            cnt += (mid - left + 1);
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(nums[right]);
        right++;
    }
    for(int i = low;i <= high; i++){
        nums[i] = temp[i - low];
    }
    return cnt;
}

int countInversion(vector<int> &nums, int low, int high){
    int cnt = 0; 
    int mid = (low+high)/2;
    if(low >= high) return cnt; 
    cnt += countInversion(nums, low, mid);
    cnt += countInversion(nums, mid+1, high);
    cnt += merge(nums, low, mid, high);
    return cnt;
}

int main(){
    int n; 
    cout << "Enter the number of elements in the array : ";
    cin >> n; 

    vector<int> nums(n);

    for(int i = 0 ; i < n; i++){
        cout << "Enter the element " << i << " : ";
        cin >> nums[i];
    }

    int result = countInversion(nums, 0, n-1);
    cout << result << endl; 
    return 0;
}