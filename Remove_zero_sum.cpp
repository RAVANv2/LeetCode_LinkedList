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
    ListNode* removeZeroSumSublists(ListNode* head)
    {
    	ListNode *temp=head,*pre=head,*curr=head;
    	int sum=INT_MIN;
    	while(curr!=NULL)
    	{
    		curr = curr->next;
    		if(curr!=NULL)
    		{
	    		sum = pre->val+curr->val;
	    		if(sum==0)
	    		{
	    			if(head==pre)
	    				head = head->next->next;
	    			temp->next = curr->next;
	    			curr=curr->next;
	    			pre=curr;
	    		}
	    		else if(curr->val+curr->next->val==0)
	    		{ 
	    			pre = curr;
	    		}
	    		temp = pre;
	    		pre=curr;
	    	}
    	}
    	return head;
    }
};