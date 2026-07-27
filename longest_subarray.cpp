# include <bits/stdc++.h>
using namespace std; 

int longestSubarrayWithSumK(vector<int> &nums, long long k){
    long long sum = 0; 
    map<long long, int> presumMap;
    int maxlen = 0;
    for(int i = 0 ; i < nums.size(); i++){
        sum += nums[i];
        if(sum == k){
            maxlen = max(maxlen, i+1);
        }
        long long rem = sum - k;
        if(presumMap.find(rem) != presumMap.end()){
            int len = i - presumMap[rem]; 
            maxlen = max(maxlen, len);
        }
        presumMap[sum] = i;
    }
    return maxlen;

}

int main(){
    int n; 
    cout  << "Enter the number of elements in the array : ";
    cin >> n ; 

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the element " << i << " : ";
        cin >> nums[i];
    }
    long long k; 
    cout << "Enter the number : "; 
    cin >> k;

    int result = longestSubarrayWithSumK(nums, k);
    cout << "longest Subarray : " << result << endl;
    return 0;
}