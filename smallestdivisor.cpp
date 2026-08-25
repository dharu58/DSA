class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxi = INT_MIN;
        for(int i = 0 ; i < nums.size(); i++){
            maxi = max(maxi, nums[i]);
        }
        int low = 1, high = maxi;
        int ans = high;
        while(low <= high){
            int mid = (low+high)/2;
            long long sum = 0;
            for(int i = 0; i < nums.size(); i++){
                sum += ceil((double)nums[i]/(double)mid);
            }
            if(sum <= threshold){
                ans = mid; 
                high = mid - 1;
            }else{
                low = mid + 1;
            }
            
        }
        return ans;
        
    }
};