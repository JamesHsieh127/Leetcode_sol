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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levelNodeValues;
        levelorder(root, 0, levelNodeValues);
        return levelNodeValues;
    }

    void levelorder(TreeNode *root, int level, vector<vector<int>> &levelNodeValues)
    {
        if(!root) return;
        if(levelNodeValues.size() == level) levelNodeValues.push_back({});
        levelNodeValues[level].push_back(root->val);
        if(root->left) levelorder(root->left, level+1, levelNodeValues);
        if(root->right) levelorder(root->right, level+1, levelNodeValues);
    }
};
