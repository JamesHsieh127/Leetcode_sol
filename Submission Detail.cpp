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
    TreeNode* sortedListToBST(ListNode* head) {
        return ListToTree(head, NULL);
    }

    TreeNode* ListToTree(ListNode* start, ListNode* end)
        {
            if(start == end) return NULL;

            ListNode* fast = start;
            ListNode* slow = start;

            while(fast != end && fast->next != end)
            {
                slow = slow->next;
                fast = fast->next->next;
            }

            TreeNode* root = new TreeNode(slow->val);
            root->left = ListToTree(start, slow);
            root->right = ListToTree(slow->next, end);
            return root;
        }
};
