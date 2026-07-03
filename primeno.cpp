#include <bits/stdc++.h>
using namespace std;

int findingprime(int n) {
    vector <int> v;
    int cmt = 0;
    for(int i = 1; i <= sqrt(n); i++){
        if(n%i == 0){
            v.push_back(i);
            cmt = cmt+1;
            if (n/i != i) {
                v.push_back(i);
                cmt = cmt+1;
            }

        }
    }
    if (cmt == 2){
        cout << "This is a prime number" << " ";
    }
    else{
        cout << "This is not a prime number" << " ";
    }
}


int main(){
    int n;
    cout << "Enter the number to check if prime np or not : ";
    cin >> n;
    findingprime(n);
    return 0;

}
