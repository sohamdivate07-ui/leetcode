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
    bool hasCycle(ListNode *head) {
     ListNode*dummy= new ListNode(0);
     dummy->next=head;
     ListNode*fast=dummy;
     ListNode*slow=dummy;
     while(fast!=nullptr && fast->next!=nullptr)
     {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            delete(dummy);
            return true;
        }
     }
     delete(dummy);
     return false;
    }
};