# include <bits/stdc++.h>
using namespace std; 
void dutchFlagAlgo(vector<int> &nums,int n){
    int low = 0 , mid = 0,high = n-1 ; 
    while(mid<=high){
        if(nums[mid] == 0){
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid++;
        }
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main(){
    int n ;
    cout << "Enter the number of elements : ";
    cin  >> n; 

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the number 0,1,2 : ";
        cin >> nums[i];
    }
    dutchFlagAlgo(nums,n);
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}