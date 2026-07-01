#include <bits/stdc++.h>
using namespace std;

void explainpair() {
    pair <int,int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int,int>> p = {1,{3,4}};

    cout << p.first << " " << p.second.first << " "<< p.second.second;

    pair<int, int> arr[] = {{1,2},{2,5},{5,1}};

    cout << arr[1].second;
}

void explainVector() {

    vector<int> v;  // it creates an empty container also this is an array but it is dynamic in nature
    
    v.push_back(1); // {1}
    v.emplace_back(2); //{1,2}

    vector<pair<int,int>> vec; // declaration of vector of a pair data type

    v.push_back({1,2}); // with curly brackets also its considered a pair
    v.emplace_back(3,4); // without curly brackets also its considered a pair automatically in emplace_back
    
    vector <int> v(5,100); // container with 5 elements(size 5) with all as 100 -- {100,100,100,100,100}

    vector<int> v(5); // just a container with size 5 with garbage or 5 zeros 

    vector<int> v1(5,20); // declares a container with 5 20s -- {20,20,20,20,20}
    vector<int> v2(v1); // copy contants of v1 into v2
    




}