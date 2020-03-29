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
    int getLength(ListNode *temp)
    {
        int len=0;
        while(temp)
        {
            len++;
            temp=temp->next;
        }
        return len;
    }
    bool isPalindrome(ListNode* head) 
    {
      int len = getLength(head);
      int length = len/2;

      vector<int> v;
      while(length--)
        {v.push_back(head->val);head=head->next;}

      if(len%2==1)
        head = head->next;

      for(int i=v.size()-1;i>=0 && head!=NULL;i--,head=head->next)
      {
        if(v[i]!=head->val)
            return false;
      }
      return true;
    }
};
