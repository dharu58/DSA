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
    
    // access it in a similar fashion as an array 

    cout << v[0] << " " << v.at(0);  // ppl dont use v.at much 

    // iterators -- points to the memory instead of the element 

    vector<int>::iterator it = v.begin(); // pointing to the 0th element memory

    // in order to access the address then write * in c++  but when u write *(v.begin()) it points to the memory coz v.begin() point to the memory address and by adding the * it does the opposite
    
    it++; // goes to the next memory address v.begin()+1
    cout << *(it) << " ";

    it = it + 2; // shift it by 2 positions
    cout << *(it) << " ";
    
    // other iterator 

    vector<int>::iterator it = v.end(); // end point to the memory location after the last element so to access the last element memory location vve to use it--; after the v.end()
    vector<int>::iterator it = v.rend(); // it reverses and the result will be memory location point to the predecsor memory location of the first element 
    vector<int>::iterator it = v.rbegin(); // it point to the memory location of the last element, also moves in the reverse way coz it++; means it points to the n-1th element's memory location 

    cout << v.back() << " "; // points to the last element 

    // printing vector

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++) {   // according to the data type the datatype is automatically assigned by using the auto keyword
        cout << *(it) << " ";
    }

    for (auto it : v) {
        cout << it << " ";
    }

    // deletion in a vector

    // erase single element 
    // {10,20,30,40,50}
    v.erase(v.begin() + 1); //will delete the 20 -- {10,30,40,50}

    // delete multiple elements 
    //{10,20,30,40,50} delete {20,30}
    v.erase(v.begin()+1,v.begin()+3) // the end should be the pointing to the next element after the element u want to delete so that 20 and 30 gets deleted 
    // {10,40,50}
    // v.erase(start,end+1);

    // insert functions in vector

    vector<int> v(2,100); // {100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin(1),2,10); //{300,10,10,100,100}
     
    // what if uve a vector and want to insert it into some other vector
    vector<int> copy(2,50); // {50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

    // other functions in vector

    //{10,20}
    cout << v.size(); //2

    //{10,20}
    v.pop_back(); //{10} -- pops the last element 

    //v1 -> {10,20}
    //v2 -> {30,40}
    v1.swap(v2); //v1 -> {30,40} ; v2 -> {10,20} -- just swaps the 2 vectors 

    v.clear(); // clears the entire vector no matter the size of the vector

    cout << v.empty(); // returns True if its empty and False if not empty


    // lists 
     
    list <int>ls; // declaring

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}

    ls.push_front(5); //{5,2,4};

    ls.emplace_front(); // {2,4}

    //Deque  --  very similar to vector and lists 
    
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); // {4,1,2}
    dq.emplace_front(3); // {3,4,1,2}
    
    dq.back();

    dq.front();


    // Stack  -- LIFO - last in first out
    // only 3 functions in stack -- push, pop, top
    void explainStack() {
        stack<int> st;
        st.push(1); // {1}
        st.push(2); //{2,1}
        st.push(3); //{3,2,1}
        st.push(3); //{3,3,2,1}
        st.emplace(5); // {5,3,3,2,1}
        
        cout << st.top(); // prints 5  coz lifo

        st.pop(); // deletes the topmost element -- that is 5 here 

        cout << st.top(); // 3 -- the next topmost element

        cout << st.size(); // 4 

        cout << st.empty(); // false coz the stack is not empty. prints true if the stack is empty

        // swapping 

        stack<int>st1,st2;
        st1.swap(st2);

        //Queue -- FIFO -- First In First Out

        void Queue(){
            queue<int> q;
            
            q.push(1); // {1}
            q.push(2); //{1,2}
            q.emplace(4); // {1,2,4}

            q.back() += 5; // {1,2,9} -- 5 is added to the last element 

            cout << q.back(); // prints 9

            cout << q.front(); // prints 1

            //deletion 

            q.pop(); // {2,9} -- deletes the first element 

            cout << q.front(); // prints 2
        }

  }

void explainPQ(){  // the element with the highest priority will stay at the top
    priority_queue<int>pq;

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout << pq.top(); //prints 10 which is at the holds the highest priority

    pq.pop(); //{8,5,2}

    cout << pq.top(); //prints 8

    // what if v what a priority queue which stores the min value at the top
    // min priority queue 

    priority queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5} time complexity O(log n) for pop also same 
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout << pq.top(); // prints 2 time complexity O(1)
}

// Set -- sorts everything in the sorted order and only stores unique elements

void explainSort(){
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2} doesnt take 2 again coz only stores unique values 
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    //{1,2,3,4,5}
    auto it = st.find(3); // returns an iterator(points to the address) that points to the tree

    auto it = st.find(6); // if 6 is not in the set then it will return st.end() which points to address after the end of the set 

    st.erase(5); // erases 5 deletes 5 and maintains the sorted order 

    int cnt = st.count(1); // returns 1 if its there in the set else returns 0 

    // to erase v can use the element or the iterator

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // erase multiple elements 
    // {1,2,3,4,5}

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2); // after erase {1,4,5} {first, last}
    
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}

void explainMultiSet(){

    multiset<int>ms; // orks same as set but only follows the sorted part not the unique part
    ms.insert(1); // {1}
    ms.insert(1); //{1,1}
    ms.insert(1); // {1,1,1}

    int cnt = ms.count(1); // this time it counts the number of occurance of the element here it counts the number of 1 ie 3 

    ms.erase(1); // all 1's is erased but if address or iterator given only that one element is erased 

    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);
}

void explainSet(){
    unordered set <int> st; // everything same as set except its not sorted but it nly stores unique values 

}

// map -- stores unique keys in sorted order but values r not unique 
void explainMap() {

    map<int,int> mpp;
    map<int,pair<int,int>> mpp;
    map<pair<int,int>,int> mpp;

    mpp[1] =  2;
    mpp.emplace({3,1});
    mpp.insert({2,4});

    mpp[{2,3}] = 10;

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
 
    cout << mpp[1];
    cout << mpp[5];
    
    // to find the address or the iterator 

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

}

void explainMultiMap() {
    // same as map
}

void explainUnorderedMap() {
    // same as set and unordered set difference
}



     






}