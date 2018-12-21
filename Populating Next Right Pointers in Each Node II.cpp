/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        if(!root) return;

        queue<TreeLinkNode *> q;
        q.push(root);

        while(!q.empty())
        {
            int len = q.size();
            for(int i=0; i<len; ++i)
            {
                TreeLinkNode *t = q.front();
                q.pop();

                if(i< len-1) t->next = q.front();
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
            }
        }
    }
};
