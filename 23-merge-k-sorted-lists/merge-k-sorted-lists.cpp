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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int l=0,r=lists.size()-1;
        return solve(lists,l,r);
    }
    ListNode* solve(vector<ListNode*>& lists,int l,int r){
        if(l>r)return NULL;
        if(l==r)return lists[l];
        int mid=(l+r)/2;
        ListNode* left=solve(lists,l,mid);
        ListNode* right=solve(lists,mid+1,r);
        return mergelist(lists,left,right);
    }
    ListNode* mergelist(vector<ListNode*>& lists,ListNode* left,ListNode* right){
        ListNode* dummy=new ListNode(-1);
        ListNode* temp=dummy;
        while(left!=NULL && right!=NULL){
            if(left->val<right->val){
                temp->next=left;
                left=left->next;
                temp=temp->next;
            }else{
                temp->next=right;
                right=right->next;
                temp=temp->next;
            }
        }
        if(left){
            temp->next=left;
        }else{
            temp->next=right;
        }
        return dummy->next;
    }
};