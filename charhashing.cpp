#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout << "Enter the string : ";
    cin >> s;
    
    int hash[256] = {0};
    for (int i = 0; i < s.size();i++){
        hash[s[i]]++;
    }
    int q;
    cout << "Enter the number of elements that you want to find : ";
    cin >> q;
    while(q--){
        char c;
        cout << "Enter the character that you want to find : ";
        cin >> c;
        cout << hash[c] << endl;
        
    }
    return 0;
}
