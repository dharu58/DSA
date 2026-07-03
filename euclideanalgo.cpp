/*gcd(a,b) = gcd(a-b,b)  -- where a > b
instead of truncationg v can just do gcd(a%b,b) v will get tthe same answer
basically greater % smaller*/ 
#include <bits/stdc++.h>
using namespace std;

int gcdeuclidean(int n1,int n2) {
    while (n1 > 0 && n2 > 0){
        if (n1>n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }    
     if (n1 == 0) return n2;
     else return n1;
}

int main(){
    int n1;
    int n2;
    cout << "Enter the first number : ";
    cin >> n1;
    cout << "Enter the second number : ";
    cin >> n2;
    cout << "The gcd of the numbers is " << gcdeuclidean(n1,n2) << endl;
    return 0;
}