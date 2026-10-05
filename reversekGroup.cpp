/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
ListNode* getkthNode(ListNode* temp, int k){
    while(temp != nullptr && k > 1){
        k--;
        temp = temp -> next;
    }
    return temp;
}
ListNode* reverseLinkedList(ListNode* head){
    if(head == nullptr || head -> next == nullptr){
        return head;
    }
    ListNode* newHead = reverseLinkedList(head -> next);
    ListNode* front = head -> next;
    front -> next = head;
    head -> next = nullptr;
    return newHead;
}
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = nullptr;
        while(temp != nullptr){
            ListNode* kthNode = getkthNode(temp, k);
            if(kthNode == nullptr){
                if(prevLast) prevLast -> next = temp;
                break;
            }
            ListNode* nextNode = kthNode -> next;
            kthNode -> next = nullptr;
            reverseLinkedList(temp);
            if(temp == head){
                head = kthNode;
            }else{
                prevLast -> next = kthNode;
            }
            prevLast = temp;
            temp = nextNode;
        }
        return head;
        
        
    }
};