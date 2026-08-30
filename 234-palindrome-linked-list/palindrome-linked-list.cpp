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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* prev = NULL;

        while (slow != NULL) {
            ListNode* front = slow->next;
            slow->next = prev;
            prev = slow;
            slow = front;
        }

        ListNode* p = head;
        ListNode* q = prev;

        while (q != NULL) {
            if (p->val != q->val)
                return false;

            p = p->next;
            q = q->next;
        }

        return true;
    }
};