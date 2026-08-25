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
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int size=0;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        if(n==size){
            ListNode* t=head;
            head=head->next;
            delete(t);
            return head;
        }
        int loc=size-n;
        ListNode* prev=head;
        ListNode* curr=head;
        for(int i=0;i<loc;i++){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        delete(curr);
        return head;
    }
};