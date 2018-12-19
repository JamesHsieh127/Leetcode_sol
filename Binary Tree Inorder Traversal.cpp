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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> allNodeValues;
        inorder(root, allNodeValues);
        return allNodeValues;
    }

    void inorder(TreeNode *root, vector<int> &allNodeValues)
    {
        if(!root) return;
        inorder(root->left, allNodeValues);
        allNodeValues.push_back(root->val);
        inorder(root->right, allNodeValues);
    }
};
