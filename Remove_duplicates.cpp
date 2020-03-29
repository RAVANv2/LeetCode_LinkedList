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
    ListNode* deleteDuplicates(ListNode* head) 
    {
		ListNode *temp = new ListNode(0);
		temp->next = head;
		ListNode *pre = temp;
		ListNode *curr = head;

		while(curr!=NULL)
		{
			bool duplicate=false;
			while(curr->next!=NULL && curr->val == curr->next->val)
			{
				duplicate=true;
				curr = curr->next;
			}
			if(duplicate)
				pre->next = curr->next;
			else
				pre = curr;
			curr = curr->next;
		}
        // cout<<temp->val<<endl;
        //     cout<<temp->next->val<<endl;
		return temp->next;
    }
};