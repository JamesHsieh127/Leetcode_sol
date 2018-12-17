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
    int pathSum(TreeNode* root, int sum) {
        if(!root) return 0;
        return adder(root, sum)+pathSum(root->left, sum)+pathSum(root->right, sum);
    }
    int adder(TreeNode* root, int sum)
    {
        int counter =0;
        if(!root) return 0;
        if(root->val - sum == 0) counter++;

        counter += adder(root->left, sum-root->val);
        counter += adder(root->right, sum-root->val);
        return counter;
    }
};
