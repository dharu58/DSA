# include <bits/stdc++.h>
using namespace std; 

vector<int> leaderElements(vector<int> &nums){
    int maxi = INT_MIN; 
    vector<int> ans; 
    int n = nums.size();
    for(int i = n-1; i>=0; i--){
        if(nums[i]>maxi){
            ans.push_back(nums[i]);
        }
        maxi = max(maxi, nums[i]);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n;
    cout << "Enter the number of elements in the array : ";
    cin  >> n; 

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the elements " << i << " : ";
        cin >> nums[i];
    }

    vector<int> result = leaderElements(nums);
    for(auto it : result){
        cout << it << " ";
    }
    return 0;
    
    }
