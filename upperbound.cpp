#include<bits/stdc++.h>
using namespace std; 

/*Time Complexity = O(log2n)
*/

int upperbound(vector<int> &nums, int x){
    int n = nums.size(); 
    int low = 0, high = n - 1; 
    int ans = n; 
    while(low <= high){
        int mid = (low+high)/2;
        if (nums[mid] > x){
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
    cin >> n; 
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the element " << i <<" : ";
        cin >> nums[i];
    }
    int x; 
    cout << "Enter the number u want to find : ";
    cin >> x; 
    int result = upperbound(nums, x);
    cout << result; 
    return 0;
}