# include <bits/stdc++.h>
using namespace std; 

vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> mpp; 
        for(int i = 0 ; i < nums.size(); i++){
            int num = nums[i];
            int moreneeded = target - num;
            if (mpp.find(moreneeded) != mpp.end()){
                return {mpp[moreneeded],i};
            }
            mpp[num] = i;
        }
        return {-1,-1};
    }

int main(){
    int n ; 
    cout << "Enter the number of elements in the array : ";
    cin >> n; 
    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the elements " << i << " : ";
        cin >> nums[i];
    }

    int target;
    cout << "Enter the targest number : ";
    cin >> target;
    auto result = twoSum(nums,target);
    for(auto it : result){
        cout << it << " ";
    }
    return 0;

}