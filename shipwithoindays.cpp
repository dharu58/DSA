class Solution {
private:
    int ispossible(vector<int>& weights, int capacity){
            int day = 1, load = 0;
            for(int i = 0; i < weights.size(); i++){
                if(load+weights[i] > capacity){
                    day = day + 1;
                    load = weights[i];
                }else{
                    load += weights[i];
                }
            }
            return day;
        }
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int sum = 0;
        int maxi = INT_MIN;
        for(int i = 0 ; i < weights.size();i++){
            maxi = max(maxi, weights[i]);
            sum += weights[i];
        }
        int low = maxi, high = sum , ans = high;
        while(low <= high){
            int mid = (low+high)/2;
            if(ispossible(weights,mid) <= days){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
        
    }
};