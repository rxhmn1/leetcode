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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* l1=list1;
        ListNode* l2=list2;
        ListNode* dummy=new ListNode(-1);
        ListNode* newHead=dummy;
        
        if(l1==NULL)return l2;
        else if(l2==NULL)return l1;
        else if(l1==NULL && l2==NULL)return l1;
        while(l1!=NULL && l2!=NULL){
        if(l1->val<l2->val){
            dummy->next=l1;
            l1=l1->next;
            dummy=dummy->next;
        }
        else{
            dummy->next=l2;
            l2=l2->next;
            dummy=dummy->next;
        }
        }
        while(l1!=NULL){
            dummy->next=l1;
            l1=l1->next;
            dummy=dummy->next;
        }
        while(l2!=NULL){
            dummy->next=l2;
            l2=l2->next;
            dummy=dummy->next;
        }
        return newHead->next;
    }
};