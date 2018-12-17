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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int> > result;
        vector<int> temp;

        NodeSum(root, sum, temp, result);
        return result;
    }

    void NodeSum(TreeNode* node, int sum, vector<int>& temp, vector<vector<int>>& result)
    {
        if(!node) return;
        temp.push_back(node->val);

        if(sum == node->val && !node->left && !node->right) result.push_back(temp);

        NodeSum(node->left, sum-node->val, temp, result);
        NodeSum(node->right, sum-node->val, temp, result);
        temp.pop_back();
    }
};
