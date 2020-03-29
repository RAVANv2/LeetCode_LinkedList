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
    void input(ListNode *head, vector<int> &v)
    {
      while(head!=NULL)
      {
        v.push_back(head->val);
        head = head->next;
      }
    }
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      if(l1==NULL && l2==NULL)
        return NULL;
      if(l1==NULL && l2!=NULL)
        return l2;
      if(l1!=NULL && l2==NULL)
        return l1;

      vector<int> v;
      input(l1,v);
      input(l2,v);

      sort(v.begin(),v.end());

      ListNode *head = NULL;
      for(int i=0;i<v.size();i++)
      {
        ListNode *temp=new ListNode(v[i]);
        if(head==NULL)
          head=temp;
        else
        {
          ListNode *ptr = head;
          while(ptr->next!=NULL)
          {
            ptr = ptr->next;
          }
          ptr->next = temp;
        }
      }
      return head;
    }
};
