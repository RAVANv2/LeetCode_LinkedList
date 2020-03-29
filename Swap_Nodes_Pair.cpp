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
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp =head;
        if(temp!=NULL)
        {
        	swap(temp->val,temp->next->val);
        	swapPairs(temp->next->next);
        }
    }
};