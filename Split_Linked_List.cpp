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
    vector<ListNode*> splitListToParts(ListNode* root, int k)
    {
    	ListNode *temp = root;
    	int len=0,remain;
    	while(!temp)
    	{
    		len++;
    		temp = temp->next;
    	}    

    	remain = len%k;

    	while(remain--)
    	{
    		
    	}
    }
};