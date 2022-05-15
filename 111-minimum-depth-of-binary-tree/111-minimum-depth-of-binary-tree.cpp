/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        int result;
        
        queue<TreeNode*> q;
        q.push(root);
        
        if(root==NULL) return 0;
        int i=0;
        while(q.empty()==false)
        {
            i++;
            int s = q.size();
            for(int j=0;j<s;j++)
            {  
                TreeNode* curr = q.front();
            
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
                q.pop();
            
                if(curr->left==NULL && curr->right==NULL)
                return i;
            }
        }
        return -1;
    }
};
