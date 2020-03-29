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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
    	ListNode *pa=headA;

    	while(pa!=NULL)
    	{
    		for(ListNode *pb=headB;pb!=NULL;pb=pb->next)
    		{
    			if(pa==pb)
    				return pa;
    		}
    		pa=pa->next;
    	}    
    	return NULL;
    }
};