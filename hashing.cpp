#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n; 

    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Enter the number : ";
        cin >> arr[i];
    }

    int hash[13] = {0};
    for (int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter the number : ";
    cin >> q;
    while (q--){
        int number;
        cout << "Enter the number you want to find : ";
        cin >> number;
        if (number >= 0 && number < 13){
            cout << hash[number] << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}