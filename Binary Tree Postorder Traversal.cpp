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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> allNodeValues;
        postorder(root, allNodeValues);
        return allNodeValues;
    }

    void postorder(TreeNode *root, vector<int> &allNodeValues)
    {
        if(!root) return;
        postorder(root->left, allNodeValues);
        postorder(root->right, allNodeValues);
        allNodeValues.push_back(root->val);
    }
};
