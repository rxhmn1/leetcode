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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode* dummynode= new ListNode(0);
      ListNode* temp=dummynode;
      int sum=0,carry=0;
      ListNode* a=l1;
      ListNode* b=l2;
      while(a!=NULL || b!=NULL){
        sum=carry;
        if(a!=NULL){
            sum+=a->val;
        }
        if(b!=NULL){
            sum+=b->val;
        }
        ListNode* x=new ListNode(sum%10);
        temp->next=x;
        temp=temp->next;
        carry=sum/10;
        if(a!=NULL)a=a->next;
        if(b!=NULL)b=b->next;
      }
      if(carry!=0)temp->next=new ListNode(carry);
      return dummynode->next;
    }
};