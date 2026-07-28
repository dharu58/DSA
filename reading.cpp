# include <bits/stdc++.h>
using namespace std; 

string reading(vector<int> &book, int target){
    int right = book.size()-1, left = 0 ;
    sort(book.begin(), book.end());
    while(left < right){
        int sum = book[left] + book[right];
        if (sum == target) return "YES";
        else if (sum < target) left ++;
        else right --;
    }
    return "NO";
}

int main(){
    int n; 
    cout << "Enter the number of elements in the array : ";
    cin  >> n; 

    vector<int> book(n); 
    for(int i = 0; i < n; i++){
        cout << "Enter the element " << i << " : ";
        cin >> book[i];
    }
    int target; 
    cout << "Enter the target page : ";
    cin >> target; 
    auto result = reading(book,target);

    cout << result << endl;
    return 0;

}