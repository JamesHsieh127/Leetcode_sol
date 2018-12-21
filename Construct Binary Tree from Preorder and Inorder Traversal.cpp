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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildBT(preorder, 0, preorder.size()-1, inorder, 0, inorder.size()-1);
    }

    TreeNode *buildBT(vector<int> &preorder, int pLeft, int pRight, vector<int> &inorder, int iLeft, int iRight)
    {
        if(pLeft > pRight || iLeft > iRight) return NULL;
        TreeNode *currentRoot = new TreeNode(preorder[pLeft]);

         int i =0;
        for(i=iLeft; i<= iRight; ++i)
        {
            if(inorder[i] == preorder[pLeft]) break;
        }

        currentRoot->left = buildBT(preorder, pLeft+1, pLeft+i-iLeft, inorder, iLeft, i-1);
        currentRoot->right = buildBT(preorder, pLeft+i-iLeft+1, pRight, inorder, i+1, iRight);
        return currentRoot;
    }
};
