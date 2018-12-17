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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int result = 0;
        max_tree_height(root, result);
        return result;
    }

    int max_tree_height(TreeNode* node, int& result)
    {
        if(!node) return 0;
        int left_height = max_tree_height(node->left, result);
        int right_heght = max_tree_height(node->right, result);
        result = max(result, left_height+right_heght);
        return max(left_height, right_heght)+1;

    }
};
