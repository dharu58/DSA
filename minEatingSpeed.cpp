class Solution {
public:
    int minEatingSpeed(const vector<int>& arr, int mid) {
        int low = 1; 
        int high = *max_element(arr.begin(), arr.end());
        int ans = high;
        while(low <= high){
            int middle = (low+high)/2;
            long long sum = 0; 
            for(int i : arr){
                sum += (i + middle - 1)/middle;
            }
            if(sum <= mid){
                ans = middle;
                high = middle - 1;
            }else{
                low = middle + 1;
            }
        }
        return ans;
    }
};