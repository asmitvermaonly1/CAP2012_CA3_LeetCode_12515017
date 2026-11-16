// LeetCode 25: Reverse Nodes in k-Group (Hard)
// Time Complexity: O(n)
// Space Complexity: O(n/k)
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        ListNode* temp = head;

        for(int i = 0; i < k; i++)
        {
            if(temp == NULL)
            {
                return head;
            }

            temp = temp->next;
        }

        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* next = NULL;

        for(int i = 0; i < k; i++)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        head->next = reverseKGroup(current, k);

        return prev;
    }
};
