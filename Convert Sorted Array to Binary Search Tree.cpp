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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return ArrayToBST(nums, 0, nums.size());
    }

    TreeNode* ArrayToBST(vector<int> &num, int start, int end)
    {
        if(start >= end) return NULL;

        int mid = start + (end-start)/2;

        TreeNode* root = new TreeNode(num[mid]);
        root->left = ArrayToBST(num, start, mid);
        root->right = ArrayToBST(num, mid+1, end);
        return root;
    }
};
