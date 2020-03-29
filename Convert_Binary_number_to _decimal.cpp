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
    int getDecimalValue(ListNode* head)
    {
    	int sum=0;
    	int len=0;
    	ListNode *temp=head;
    	while(temp!=NULL)
    	{
    		len++;
    		temp = temp->next;
    	}    
    	len--;

    	while(head!=NULL)
    	{
    		sum+=head->val*pow(2,len);
    		len--;
    		head=head->next;
    	}
    	return sum;
    }
};