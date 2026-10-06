#include<bits/stdc++.h>
using namespace std;

Node<int>* sortTwolists(Node<int>* list1, Node<int>* list2){
    Node<int>*t1 = list1;
    Node<int>* t2 = list2;
    Node<int>* dNode = new Node<int>(-1);
    Node<int>* temp = DNode;
    while(t1 != nullptr && t2 != nullptr){
        if(t1->data < t2 -> val){
            temp -> next = t1;
            temp = t1;
            t1 = t1->next;
        }
        else{
            temp -> next = t2;
            temp = t2;
            t2 = t2 -> next;
        }
        if(t1) temp -> next = t1;
        else temp -> next = t2;
        return DNode -> next;
    }
}