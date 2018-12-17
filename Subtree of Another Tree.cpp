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
    bool theSame(TreeNode* s, TreeNode*t){
        if(t==NULL||s==NULL)
        {
            if(t==s)
                return true;
            else
                return false;
        }
        if((s->val)!=(t->val))
            return false;
        return theSame(s->left,t->left)&&theSame(s->right,t->right);
    }
    bool isSubtree(TreeNode* s, TreeNode* t)
    {
        if(theSame(s,t))
            return true;
        if(s==NULL)
            return false;
        return isSubtree(s->left,t)||isSubtree(s->right,t);
    }
};


//Another solution
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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s) return false;
        if(isSameTree(s, t)) return true;
        return (isSubtree(s->left, t) || isSubtree(s->right, t));
    }
    bool isSameTree(TreeNode* a, TreeNode* b)
    {
        if(!a && !b) return true;
        if(!a && b) return false;
        if(a && !b) return false;
        if(a->val != b->val) return false;
        return isSameTree(a->left, b->left) && isSameTree(a->right, b->right);
    }
};
