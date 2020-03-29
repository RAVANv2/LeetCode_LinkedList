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
    ListNode* rotateRight(ListNode* head, int k) {
    	ListNode *l=head;
    	int count;
    	while(l!=NULL)
    	{
    		count++;
    		l = l->next;
    	}
    	if(k>count && count!=0)
    		k = k%count;

    	if(head!=NULL)
    	{
    		if(head->next!=NULL)
    		{
			   		while(k--)
			   		{
			   			ListNode *temp = head;
			   			while(temp->next->next!=NULL)
			   				temp = temp->next;
			   			ListNode *q;
			   			q = temp->next;
			   			temp->next = NULL;
			   			q->next = head;
			   			head = q;
			   		}  
			} 
		}	  
   		return head;
    }
};