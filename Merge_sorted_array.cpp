#include <bits/stdc++.h>
using namespace std; 

/*Time Complexity : O(min(n,m)) + O(nlogn) + O(mlogm)
Space Complexity : O(1)
*/
void merge(vector<long long> &nums1, int n , vector<long long> &nums2, int m){
    int right = 0; 
    int left = n-1;
    while(left >= 0 && right < m){
        if(nums1[left] > nums2[right]){
            swap(nums1[left], nums2[right]);
            left--, right++;
        }else{
            break;
        }
    }
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
}

int main(){
    int n,m; 
    cout << "Enter the number of elements in the array1 : "; 
    cin >> n; 
    vector<long long> nums1(n);

    for(int i = 0; i < n; i++){
        cout << "Enter the element " <<i<< " : ";
        cin >> nums1[i];
    }

    cout << "Enter the number of elements in the array2 : "; 
    cin >> m; 
    vector<long long> nums2(m);

    for(int i = 0; i < m; i++){
        cout << "Enter the element " <<i<< " : ";
        cin >> nums2[i];
    }

    merge(nums1, n, nums2, m); 

    for(auto it : nums1){
        cout << it << " ";
    }
    cout << endl; 

    for(auto it : nums2){
        cout << it << " ";
    }
    cout << endl; 

    return 0;
} 

