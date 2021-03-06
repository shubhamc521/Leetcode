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
    int deepestLeavesSum(TreeNode* root) {
        int sum;
        
        if(root==NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty())
        {
            sum=0;
            
            int s = q.size();
            for(int i=0;i<s;i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                sum=sum+curr->val;
                
                if(curr->left) 
                {
                    q.push(curr->left);
                    //sum+=curr->left->val;
                }
                if(curr->right) 
                {
                    q.push(curr->right);
                    //sum+=curr->right->val;
                }  
            }
        }
    return sum;    
    }
};