# include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high){
    vector<int> temp; 
    int left = low; 
    int right = mid+1; 
    while(left <= mid && right <=high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(nums[right]);
        right++; 
    }
    for(int i = low; i <= high; i++){
        nums[i] = temp[i-low];
    }
}

int countpairs(vector<int> &nums, int low, int mid, int high){
    int cnt = 0; 
    int right = mid+1; 
    for(int i = low; i <= mid; i++){
        while(right <= high && nums[i] > 2 * nums[right]) right++;
        cnt += (right - (mid+1));
    }
    return cnt; 
}

int mergesort(vector<int> &nums, int low, int high){
    int cnt = 0; 
    int mid = (low+high)/2; 
    if(low>=high) return cnt; 
    cnt += mergesort(nums, low, mid);
    cnt+= mergesort(nums, mid+1, high);
    cnt += countpairs(nums, low, mid, high); 
    merge(nums, low,mid, high);
    return cnt;
}

int main(){
    int n; 
    cout << "Enter the number of elements in the array : "; 
    cin >> n ; 
    vector <int> nums(n); 
    for(int i = 0; i <n ; i++){
        cout <<"Enter the element " << i << " : "; 
        cin >> nums[i];
    }

    int result = mergesort(nums, 0, n-1);
    cout << result; 
    return 0;
}