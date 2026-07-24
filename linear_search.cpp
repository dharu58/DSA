#include <bits/stdc++.h>
using namespace std;

int linear_search(vector<int> &nums, int no){
    for(int i = 0; i < nums.size(); i++){
        if (nums[i] == no){
            return i;
        }
    }
    return -1;
}

int main(){
    int n; 
    cout << "Enter the number of elements in the array : ";
    cin >> n; 

    vector<int> nums(n);
    for(int i = 0; i < n ; i++){
        cout << "Enter the element " << i << " : ";
        cin >> nums[i];
    }
    int no; 
    cout << "Enter the number you want to find : ";
    cin >> no;
    int result = linear_search(nums, no);

    if (result == -1){
        cout << "The number isnt present in the array";
    }
    else{
        cout << result;
    }
}