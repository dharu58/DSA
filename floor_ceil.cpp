#include<bits/stdc++.h>
using namespace std; 

//time complexity = O(log2n)
int floorrr(vector<int> &nums, int target){
    int n = nums.size();
    int low = 0, high = n - 1; 
    int ans = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] <= target){
            ans = nums[mid];
            low = mid + 1; 
        }else{
            high = mid - 1;
        }
    }
    return ans;
}

int lowbound(vector<int> &nums, int target){
    int n = nums.size();
    int low = 0, high = n - 1; 
    int ans = n;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] >= target){
            ans = nums[mid]; 
            high = mid - 1; 
        }else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    int n; 
    cout<< "Enter the number of elements in the array : ";
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the element " << i << " : ";
        cin >> nums[i];
    }
    int target;
    cout << "Enter the target number you want to find the ceil and floor for : ";
    cin >> target;
    int floorr = floorrr(nums,target);
    int ceilingg = lowbound(nums,target);
    cout << "Floor : " << floorr << endl;
    cout << "ceilingg : " << ceilingg; 
    return 0;
}
