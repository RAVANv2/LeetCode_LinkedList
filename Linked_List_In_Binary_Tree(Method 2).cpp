/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSubPath(ListNode* head, TreeNode* root)
    {
        if(head==NULL && root ==NULL)
            return true;
        if(head==NULL)
            return true;
        if(root==NULL)
            return false;
        bool res=false;

        res = isSubPathCore(head,root); 
        if(res==false)
            res = isSubPath(head,root->left);
        if(res==false)
            res = isSubPath(head,root->right);
        return res;
    }

    bool isSubPathCore(ListNode *head,TreeNode *root)
    {
        if(head==NULL && root==NULL)
            return  true;
        if(head==NULL)
            return true;
        if(root==NULL)
            return false;
        if(head->val==root->val)
        {
            isSubPathCore(head->next,root->left) || isSubPathCore(head->next,root->right);
        }
        else
        {
            return false;
        }
    }
};