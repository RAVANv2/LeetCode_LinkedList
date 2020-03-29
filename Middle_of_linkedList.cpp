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
    ListNode* middleNode(ListNode* head)
    {
        ListNode *temp = head;
        int len=0;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }    

        if(len%2!=0)
        {len /=2;
         while(len>0)
        {
            head = head->next;
            len--;
        }
        }
        else
        {
            len /=2;
            len++;
            while(len>1)
        {
            head = head->next;
            len--;
        }
        }
        // cout<<"len :"<<len;
        
        return head;
    }
};