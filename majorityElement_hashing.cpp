#include <bits/stdc++.h>
using namespace std; 

int majorityElement(vector<int> &nums){
    map <int,int> mpp;
    for(int i = 0; i < nums.size(); i++){
        mpp[nums[i]]++;
    }
    for(auto it : mpp){
        if(it.second > nums.size()/2){
            return it.first;
        }
    }
    return -1;
}

int main(){
    int n; 
    cout << "Enter the number of elements in the array : ";
    cin >> n; 

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the element " << i << " : ";
        cin >> nums[i];
    }
    int result = majorityElement(nums);
    cout << "Majority Element : " << result ;
    return 0;
}