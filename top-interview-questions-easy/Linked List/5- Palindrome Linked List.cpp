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
        return check(head, head);
    }
    
    bool check(ListNode*& head, ListNode* p) {
        if(!p) { return true; }
        bool isPal = check(head, p->next);
        if(head->val != p->val) {
            return false;
        }
        head = head->next;
        return isPal;
     
    }
};