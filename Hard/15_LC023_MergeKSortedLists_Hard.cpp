// LeetCode 23: Merge k Sorted Lists (Hard)
// Time Complexity: O(N * k)
// Space Complexity: O(1)
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {

        ListNode* head = NULL;

        for(int i = 0; i < lists.size(); i++)
        {
            ListNode* temp = lists[i];

            ListNode* dummy = new ListNode(0);
            ListNode* current = dummy;

            while(head != NULL && temp != NULL)
            {
                if(head->val < temp->val)
                {
                    current->next = head;
                    head = head->next;
                }
                else
                {
                    current->next = temp;
                    temp = temp->next;
                }

                current = current->next;
            }

            if(head != NULL)
            {
                current->next = head;
            }
            else
            {
                current->next = temp;
            }

            head = dummy->next;
        }

        return head;
    }
};
