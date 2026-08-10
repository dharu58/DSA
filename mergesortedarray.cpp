#include<bits/stdc++.h>
using namespace std; 

void merge(vector<long long> &nums1, int n, vector<long long> &nums2, int m){
    vector<long long> nums3(n+m);
    int left = 0; 
    int right = 0; 
    int index = 0;
    while(left < n && right < m){
        if (nums1[left] < nums2[right]){
            nums3[index] = nums1[left];
            left++;
            index++;
        }
        else{
            nums3[index] = nums2[right];
            right++;
            index++;
        }
    }
    while (left < n){
        nums3[index++] = nums1[left++];
    }
    while(right < m){
        nums3[index++] = nums2[right++];
    }

    for(int i = 0; i < n + m; i++){
        if (i < n){
            nums1[i] = nums3[i]; 
        }else nums2[i-n] = nums3[i];
    }
    
}

int main(){
    int n,m; 
    cout << "Enter the number of elements in array1: ";
    cin >> n; 
    vector<long long> nums1(n);

    cout << "Enter the number of elements in array2 : ";
    cin >> m; 
    vector<long long> nums2(m);

    for(long long i = 0 ; i < n; i++){
        cout << "Enter the element " << i << " : ";
        cin >> nums1[i];
    }

    for(long long i = 0 ; i < m; i++){
        cout << "Enter the element " << i << " : ";
        cin >> nums2[i];
    }

    merge(nums1, n, nums2, m); 

    cout << "\nMerge Array: ";
    for(auto it : nums1){
        cout << it << " ";
    }
    cout <<endl;
    for(auto it : nums2){
        cout << it << " ";
    }
    cout << endl;
    return 0;




}