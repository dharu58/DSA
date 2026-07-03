#include <bits/stdc++.h>
using namespace std;

int finddivisors(int n) {
    vector<int> v;
    for (int i = 1; i <= sqrt(n); i++){
        if ((n % i) == 0){
            cout << i << " ";
            if ((n/i) != i){
                v.push_back(i);
        }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it : v){
        cout << it << " ";
    }
}

int main(){
    int n; 
    cout << "Enter the number you want to find the divisors for : ";
    cin >> n;
    finddivisors(n);
    return 0;
}