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
     ListNode *pa =headA;
     ListNode *pb=headB;

     int la=0;
     int lb=0;

     while(pa)
        {
            la++;
            pa=pa->next;
        }  
    while(pb)
    {
        lb++;
        pb=pb->next;
    }

    pa=headA;
    pb=headB;

    int diff;
    if(la>lb)
    {
        diff = la-lb;
        {
            for(int i=0;i<diff;i++)
                pa = pa->next;
        }
    }
    else if(lb>la)
    {
        diff = lb-la;
        for(int i=0;i<diff;i++)
            pb=pb->next;
    }

    while(pa!=pb)
    {
        pa=pa->next;
        pb=pb->next;
    }
    return pa;

    }
};