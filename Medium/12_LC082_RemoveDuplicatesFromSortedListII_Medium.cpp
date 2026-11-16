// LeetCode 82: Remove Duplicates from Sorted List II (Medium)
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        
        ListNode* temp = dummy;
        
        while(temp->next != NULL && temp->next->next != NULL)
        {
            if(temp->next->val == temp->next->next->val)
            {
                int value = temp->next->val;
                
                while(temp->next != NULL && temp->next->val == value)
                {
                    temp->next = temp->next->next;
                }
            }
            else
            {
                temp = temp->next;
            }
        }
        
        return dummy->next;
    }
};
