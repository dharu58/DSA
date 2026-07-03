#include <bits/stdc++.h>
using namespace std;

void printdivisors(int n){
    for ( int i = 1; i <= n ; i++){
        if ( n % i == 0){
            cout << i << " ";
        }
    }

}

int main(){
    int n;
    cout << "Enter the number you want to find the divisors for : ";
    cin >> n; 
    printdivisors(n);
    return 0;
}

