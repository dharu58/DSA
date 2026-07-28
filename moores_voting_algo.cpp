#include<bits/stdc++.h>
using namespace std; 

int majorityElement(vector<int> &nums){
    int cnt = 0; 
    int el; 
    
    for(int i = 0; i < nums.size(); i++){
        if(cnt == 0){
            cnt = 1; 
            el = nums[i];
        }
        else if(el == nums[i]){
            cnt++;
        }
        else{
            cnt --;
        }
    }
    int cnt1 = 0;
    for(int i = 0 ; i < nums.size(); i++){
        if(nums[i] == el){
            cnt1++;
        }
    }
    if(cnt1 > nums.size()/2){
        return el;
    }
    return -1;
}

int main(){
    int n; 
    cout << "Enter the number of elements in the array : ";
    cin >> n; 

    vector<int> nums(n);
    
    for(int i = 0; i < n; i++){
        cout << "Enter the elements " << i << " : ";
        cin >> nums[i];
    }

    int result = majorityElement(nums);
    cout << "Majority Element : " << result ;

    return 0;
}