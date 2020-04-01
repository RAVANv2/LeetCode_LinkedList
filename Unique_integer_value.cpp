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
    int numComponents(ListNode* head, vector<int>& G)
    {
    	set<int> s;
        int ans=0;
    	for(int i=0;i<G.size();i++)
    		s.insert(G[i]);
    	
    	ListNode *curr=head;

    	while(curr!=NULL)
    	{
	    	if(s.count(curr->val) && (curr->next==NULL || !s.count(curr->next->val)))
	    		ans++;
	    	curr=curr->next;
	    }
	    return ans;

    }
};