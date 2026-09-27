class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* returnnode = new ListNode();
        ListNode* headnode = returnnode; 
        
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                returnnode->next = list1;
                list1 = list1->next; 
            } else {
                returnnode->next = list2;
                list2 = list2->next; 
            }
            returnnode = returnnode->next; 
        } 

        if (list1 == nullptr) {
            returnnode->next = list2;
        } else {
            returnnode->next = list1;
        }
        
        return headnode->next;
    }
};