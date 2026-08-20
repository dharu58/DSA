#include<bits/stdc++.h>
using namespace std; 

int sqrtofint(int n){
    int low = 1, high = n;
    int ans = 1; 
    while (low <= high){
        int mid = (low+high)/2;
        if(mid*mid <= n){
            ans = mid; 
            low = mid+1;
        }else{
            high = mid - 1; 
        }
    }
    return ans;
}

int main(){
    int n; 
    cout << "Enter the number that you want to find the square root of : ";
    cin >> n;
    int result = sqrtofint(n);
    cout << result << endl;
    return 0;
}