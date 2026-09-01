/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* p1=headA;
        ListNode* p2=headB;
        int l1=0,l2=0,c=0;
        while(p1!=NULL){
            l1++;
            p1=p1->next;
        }
        while(p2!=NULL){
            l2++;
            p2=p2->next;
        }
        c=abs(l2-l1);
        ListNode* t1=headA;
        ListNode* t2=headB;
        if(l1>l2){
        while(c!=0){
            t1=t1->next;
            c--;
        }
        }
        else{
         while(c!=0){
            t2=t2->next;
            c--;
        }   
        }
        while(t1!=NULL && t2!=NULL){
            if(t1==t2)return t1;
            t1=t1->next;
            t2=t2->next;
        }
        return NULL;
    }
};