class Solution {
public:
    int xorOperation(int n, int start) {
        int xorr = 0; 
        int nums[n];
        for(int i = 0; i < n; i++){
            nums[i]= start + 2 * i;
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};