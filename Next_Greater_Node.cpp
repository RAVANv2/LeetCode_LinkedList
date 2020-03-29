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
    vector<int> nextLargerNodes(ListNode* head)
    {
    	vector<int> v;
    	int node_i =0;
    	while(head!=NULL)
    	{
    		node_i = head->val;
    		for(ListNode *temp=head;temp!=NULL;temp=temp->next)
    		{
    			if(node_i<temp->val)
    			{
    				v.push_back(temp->val);
    				break;
    			}
                else if(temp->next==NULL)
                     v.push_back(0);
    		}
    		head=head->next;
    	}
    	return v;
    }
};