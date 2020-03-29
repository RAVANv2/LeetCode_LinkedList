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
    ListNode* removeElements(ListNode* head, int val)
    {
    	ListNode *pre = head,*curr=head;

        if(!head)
            return NULL;
        while(curr!=NULL)
        {
            if(curr->val==val)
            {
                pre->next = curr->next;
                if(head->val==val && head==pre)
                {
                    head=head->next;
                    pre=head;
                }
                curr = curr->next;
            }
            else
                pre = curr;
            curr = curr->next;
        }
        return head;
    }
};