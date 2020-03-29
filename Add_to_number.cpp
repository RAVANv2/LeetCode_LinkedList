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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum=0;
        ListNode *l3=NULL;
        ListNode *head=l3;

        while(l1!=NULL || l2!=NULL || sum>0)
        {
          if(l1!=NULL)
          {
            sum +=l1->val;
            l1=l1->next;
          }
          if(l2!=NULL)
          {
            sum +=l2->next;
            l2 = l2->next;
          }

          ListNode* p = new ListNode(sum%10);
          sum/=10;
          l3->next = p;
        }
        l3 = head;
        return l3;
    }
};