# include <bits/stdc++.h>

using namespace std;



int missing_number(vector<int> &nums, int N){

    int xor1 = 0 , xor2 = 0;

    int n = nums.size();

    for(int i = 0; i < N - 1; i++){

        xor2 = xor2 ^ nums[i];

        xor1 = xor1 ^ (i+1);

    }

    xor1 = xor1 ^ N;

    return xor1 ^ xor2;

}





int main(){

    int N;

    cout << "Enter the number of elements in the array : ";

    cin >> N;

   

    int n = N-1;

    vector<int> nums(n);

    for(int i = 0 ; i < n; i++){

        cout << "Enter the element " << i << " : ";

        cin >> nums[i];

    }

    int result = missing_number(nums, N);

    cout << "Missing Number : " << result << endl; 
    return 0;



}