# include <bits/stdc++.h>
using namespace std; 

vector<int> intersection_of_two_sorted_array(vector<int> &nums1, int n1, vector<int> &nums2, int n2){
    int i = 0; 
    int j = 0; 
    vector<int> ans; 

    while (i < n1 && j < n2){
        if(nums1[i] < nums2[j]){
            i++;
        }

        else if(nums2[j] < nums2[i]){
            i++;
        }

        else{
            ans.push_back(nums1[i]);
            i++;
            j++;
        }

    }
    return ans;
}

int main(){
    int n1;
    cout << "Enter the number of elements in the array 1 : ";
    cin >> n1; 

    vector<int> nums1(n1);

    for (int i = 0 ; i < n1; i++){
        cout << "Enter the elements in the sorted order " << i << " : ";
        cin >> nums1[i]; 
    }

    int n2;
    cout << "Enter the number of elements in the array 2 : ";
    cin >> n2; 

    vector<int> nums2(n2);

    for (int i = 0 ; i < n2; i++){
        cout << "Enter the elements in the sorted order " << i << " : ";
        cin >> nums1[i]; 
    }

    vector <int> result = intersection_of_two_sorted_array(nums1, n1,nums2,n2);

    for(auto it : result){
        cout << it << " ";
    }


}
