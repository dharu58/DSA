/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
void insertCopyInBetween(ListNode* head){
    ListNode* temp = head;
    while(temp != nullptr){
        ListNode * nextElement = temp -> next;
        ListNode* copy = new ListNode(temp -> val);
        copy -> next = nextElement;
        temp -> next = copy;

        temp = nextElement;

    }
}

void connectRandomPointers(ListNode* head){
    ListNode* temp = head;
    while(temp != NULL){
        ListNode* copyNode = temp -> next;

        if(temp -> random){
            copyNode -> random = temp -> random -> next;
        }
        else{
            copyNode -> random = nullptr;
        }
        temp = temp -> next -> next;
    }
}

ListNode* getDeepCopyList(ListNode* head){
    ListNode* temp = head;
    ListNode* dummyNode = new Node(-1);
    ListNode* res = dummyNode;

    while(temp != nullptr){
        res -> next = temp -> next;
        res = res -> next;

        temp -> next = temp -> next -> next;
        temp = temp -> next;
    }
    return dummyNode -> next;
}
public:
    Node* copyRandomList(Node* head) {
        insertCopyInBetween(head);
        connectRandomPointers(head);
        return getDeepCopyList(head);
    }
};