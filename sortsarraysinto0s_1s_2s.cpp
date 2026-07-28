#include <bits/stdc++.h>
using namespace std; 

vector<int> sortarrayinto012(vector<int> &nums,int n){
    int cnt_0 = 0, cnt_1 = 0, cnt_2 = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] == 0){
            cnt_0 ++;
        }
        else if (nums[i] == 1){
            cnt_1++;
        }
        else{
            cnt_2++;
        }
    }
    for(int i = 0; i < cnt_0; i++){
        nums[i] = 0;
    }
    for(int i = cnt_0; i < cnt_0+cnt_1; i++){
        nums[i] = 1;
    }
    for(int i = cnt_0+cnt_1; i < n; i++){
        nums[i] = 2;
    }
    return nums;
}
int main(){
    int n ; 

    cout << "Enter the number of elements in the array : ";
    cin >> n; 
    vector<int> nums(n); 

    for(int i = 0; i < n; i++){
        cout << "Enter the numbers 0, 1, 2 : ";
        cin  >> nums[i];
    }
    
    auto result = sortarrayinto012(nums,n);
    for(auto it: result){
        cout << it << " "; 
    }
    return 0;
}