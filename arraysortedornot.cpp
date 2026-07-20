#include <bits/stdc++.h>
using namespace std; 

bool sorted(vector<int> &arr, int n){
    for(int i = 1; i < n; i++){
        if (arr[i] >= arr[i-1]){
        }
        else{
            return false;
        }
    }
    return true;

}

int main(){
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n;i++){
        cout << "Enter the element " << i << " : ";
        cin >> arr[i];
    }
    sorted(arr,n);
     return 0;

}