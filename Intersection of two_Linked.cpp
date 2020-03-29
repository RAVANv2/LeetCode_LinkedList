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
    	set<ListNode*> s;
    	ListNode *pa=headA;
    	ListNode *pb=headB;

    	while(pa!=NULL)
    	{
    		s.insert(pa);
    		pa=pa->next;
    	}

    	if(s.empty())
    		return NULL;

    	while(pb!=NULL)
    	{
    		if(s.count(pb))
    			return pb;
    		pb = pb->next;
    	}

    	return NULL;

    }
};