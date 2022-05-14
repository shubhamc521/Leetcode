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
    vector<double> averageOfLevels(TreeNode* root) {
        
        vector<double> result;
        vector<int> level;
        
        
        if(root==NULL) return result;;
        queue<TreeNode*> q;
        q.push(root);
        //result.push_back(double (root->val));
        
        
        while(q.empty()==false)
        {
            int i,n;
            double temp=0;
            n=q.size();
            for( i=0; i<n; i++)
            {
                TreeNode* curr = q.front();
                q.pop();
                //level.push_back(curr->val);
                temp+=curr->val;
                if(curr->left!=NULL) 
                {
                    q.push(curr->left);
                    //level.push_back(curr->left->val);
                    //temp+=curr->left->val;
                    //cout<<curr->left->val<<" ";
                }
                if(curr->right!=NULL)
                {
                    q.push(curr->right);
                    //level.push_back(curr->right->val);
                    //temp+=curr->right->val;
                    //cout<<curr->right->val<<" ";
                }
            }
        
            //cout<<endl<<"AVG"<<double(temp/q.size());
            result.push_back(double(temp/n));
            
        }
        return result;           
    }
};