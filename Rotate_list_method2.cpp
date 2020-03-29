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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *temp = head;
        int len=0;
        while(temp->next!=NULL)
        {
            len++;
            temp=temp->next;
        }

        temp->next =head;

        for(int i=0;i<(len-k%len)-1;i++)
            head = head->next;
        }
        temp = head;
        head = temp->next;
        temp->next = NULL;
        return head;
};