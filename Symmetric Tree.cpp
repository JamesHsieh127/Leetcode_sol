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
    bool isSymmetric(TreeNode* root) {
        return isSym(root, root);
    }

    bool isSym(TreeNode* L, TreeNode* R)
    {
        if(!L && !R) return true;
        if((!L && R) || (L && !R)) return false;
        if(L == R) return isSym(L->left, L->right);
        if(L->val != R->val) return false;
        return isSym(L->left, R->right) && isSym(L->right, R->left);
    }

};
