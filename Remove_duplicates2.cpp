/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution{
public:
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode *temp = new ListNode(0);
        temp->next = head;
        ListNode *pre = temp;
        ListNode *curr = head;

        while(curr)
        {
            int duplicate = 0;
            while(curr->next && curr->val==curr->next->val)
            {
                duplicate = true;
                curr = curr->next;
            }

            if(duplicate)
            {
                pre->next = curr;
            }
            else
                pre =curr;
            curr = pre->next;
        }    
        return temp->next;
    }
};