#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n; 
    cout << "Enter the number of elements in the array : ";
    cin >> n;
    
    int arr[n];
    unordered_map<int,int> mpp;
    for (int i = 0 ; i < n;i++){
        int number;
        cout << "Enter the element in the array : ";
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for (auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }

    int q;
    cout << "Enter the number of characters that you want to find : ";
    cin >> q;
    while (q--){
        int number;
        cout << "Enter the number that you want to find : ";
        cin >> number;
        cout << mpp[number] << endl;
    }

}