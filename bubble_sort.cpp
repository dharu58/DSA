#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    int swap = 0;
    for (int i = n-1; i >= 1 ; i--){
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1]= arr[j];
                arr[j] = temp;
                swap = 1;

            }
        }
        if (swap == 0){
            break;
        }
        cout << "runs/n";
    }
}
 
int main(){
    int n;
    cout << "Enter the number of elements in the array : ";
    cin >> n; 

    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Enter the elememt " << i << " : ";
        cin >> arr[i];
    }
    bubble_sort(arr,n);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}