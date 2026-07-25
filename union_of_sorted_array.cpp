#include <bits/stdc++.h>
using namespace std; 

vector<int> union_of_sorted_array(vector<int> &nums1, vector<int> &nums2){
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i = 0; 
    int j = 0; 
    vector<int> unionarr;

    while ( i < n1 && j < n1){
        if(nums1[i] <= nums2[j]){
            if(unionarr.size() == 0 || unionarr.back() != nums1[i]){
                unionarr.push_back(nums1[i]);
            }
            i++;
        }
        else{
            if(unionarr.size() == 0 || unionarr.back() != nums2[j]){
                unionarr.push_back(nums2[j]);
            }
            j++;
        }
    }
    while ( j < n2){
        if(unionarr.size() == 0 || unionarr.back() != nums2[j]){
                unionarr.push_back(nums2[j]);
            }
            j++;
        

    }
    while ( i < n1){
        if(nums1[i] <= nums2[j]){
            if(unionarr.size() == 0 || unionarr.back() != nums1[i]){
                unionarr.push_back(nums1[i]);
            }
            i++;
        }

    }
    return unionarr;
}

int main(){
    int n1; 
    int n2; 
    cout << "Enter the number of elements in array 1 : ";
    cin >> n1;
    cout << "Enter the number of elements in array 2 : ";
    cin >> n2; 

    vector<int> nums1(n1);
    vector<int> nums2(n2);

    for(int i = 0 ; i < n1; i++){
        cout<< "Enter the element "<< i<< " : ";
        cin >>nums1[i];
    }

    for(int i = 0 ; i < n2; i++){
        cout<< "Enter the element "<< i<< " : ";
        cin >>nums2[i];
    }

    vector<int>result = union_of_sorted_array(nums1, nums2);

    for(auto it : result){
        cout << it << " ";
    }
    return 0;

    
}