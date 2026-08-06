# include<bits/stdc++.h>
using namespace std;

int xorcount(vector<int> &nums, int n, int target){
    int cnt = 0; 
    for(int i = 0 ; i < n; i++){
        int xorr = 0; 
        for(int j = i; j < n; j++){
            xorr = xorr^nums[j];
            if (xorr == target) cnt++;
        }
    }
    return cnt; 
}

int main(){
    int n ; 
    cout << "Enter the number of elements in the array : ";
    cin >> n; 

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the element " << i << " : ";
        cin >> nums[i];
    }
    int target; 
    cout << "Enter the target number : "; 
    cin >> target;

    int result = xorcount(nums, n, target);
    cout << result << endl;
    return 0; 
}