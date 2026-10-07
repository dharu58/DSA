#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* merge(Node* list1, Node* list2){
    Node* dNode = new Node(-1);
    Node* res = dNode;
    while(list1 != nullptr && list2 != nullptr){
        if(list1 -> data < list2 -> data){
            res -> child = list1;
            res = list1;
            list1 = list1 -> child;
        }
        else{
            res -> child = list2;
            res = list2;
            list2 = list2 -> child;
        }
        res -> next = nullptr;
    }
    if(list1) res->child = list1;
    else res -> child = list2;
    id(dNode -> child) dNode -> child -> next = nullptr;
    return dNode -> child;
    
}

Node* flattenlinkedlist(Node* head){
    if(head == nullptr || head -> next == nullptr){
        return head;
    }
    Node* mergehead = flattenlinkedlist(head -> next);
    head = merge(head,mergehead);
    return head;
}