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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {
          count++;
          temp=temp->next;
        }
        count = count-n;
        while(count>1)
        {
          temp=temp->next;
          count--;
        }
        temp->next = temp->next->next;
        temp = head;
        return temp;
    }
};
