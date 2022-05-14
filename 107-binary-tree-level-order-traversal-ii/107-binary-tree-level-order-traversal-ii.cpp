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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> result;
        vector<int> level;
        
        
        if(root==NULL) return result;;
        queue<TreeNode*> q;
        q.push(root);
        level.push_back(root->val);
        result.push_back(level);
        level.clear();
        
        while(q.empty()==false)
        {
            int i,n;
            for( i=0, n = q.size(); i<n; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                //level.push_back(curr->val);
            
                if(curr->left!=NULL) 
                {
                    q.push(curr->left);
                    level.push_back(curr->left->val);
                }
                if(curr->right!=NULL)
                {
                    q.push(curr->right);
                    level.push_back(curr->right->val);
                }
            }
            if(level.empty()==false && (i=n))
            {
            result.insert(result.begin(),level);
            level.clear();
            }
        }
        return result;   
    }
};