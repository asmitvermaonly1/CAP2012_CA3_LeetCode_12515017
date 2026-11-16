// LeetCode 61: Rotate List (Medium)
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head == NULL || head->next == NULL || k == 0)
        {
            return head;
        }
        
        ListNode* temp = head;
        int count = 1;
        
        while(temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        
        temp->next = head;
        
        k = k % count;
        
        int steps = count - k;
        
        temp = head;
        
        for(int i = 1; i < steps; i++)
        {
            temp = temp->next;
        }
        
        head = temp->next;
        temp->next = NULL;
        
        return head;
    }
};
