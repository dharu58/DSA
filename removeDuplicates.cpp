#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
}


Node* removeDuplicates(Node* head){
    Node* temp = head;
    while(temp != NULL && temp -> next != NULL){
        Node* nextNode = temp -> next;
        while(nextNode != NULL && nextNode -> data == temp -> data){
            Node* duplicate = nextNode;
            nextNode = nextNode -> next;
            delete duplicate;
        }
        temp -> next = nextNode;
        if(nextNode != NULL) nextNode -> prev = temp;
        temp = temp -> next;
    }
    return head;
}