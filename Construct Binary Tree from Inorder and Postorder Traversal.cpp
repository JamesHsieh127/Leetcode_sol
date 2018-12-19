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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return buildBT(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1);
    }

    TreeNode *buildBT(vector<int> &inorder, int iLeft, int iRight, vector<int> &postorder, int pLeft, int pRight)
    {
        if((iLeft > iRight) ||(pLeft > pRight)) return NULL;

        TreeNode *current = new TreeNode(postorder[pRight]);

        int i =0;
        for(i =0; i< inorder.size(); ++i)
        {
            if(inorder[i] == current->val) break;
        }
        current->left = buildBT(inorder, iLeft, i-1, postorder, pLeft, pLeft+i-iLeft-1);
        current->right = buildBT(inorder, i+1, iRight, postorder, pLeft+i-iLeft, pRight-1);
        return current;
    }
};
