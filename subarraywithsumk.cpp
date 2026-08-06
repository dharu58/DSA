# include <bits/stdc++.h>
using namespace std; 

int subarraywithsumk(vector<int> &a, int k){
    int xr = 0; 
    map <int, int> mpp; 
    mpp[xr]++;
    int cnt = 0;
    for(int i = 0; i < a.size(); i++){
        xr = xr ^ a[i];
        int x = xr ^ k; 
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}

int main(){
    int n; 
    cout << "Enter the number of elements in the array : ";
    cin >> n; 

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the element " << i << " : "; 
        cin >> a[i];
    }
    int k; 
    cout << "Enter the number : "; 
    cin >> k; 
    int result = subarraywithsumk(a, k);
    cout << result << endl; 
    return 0;
}