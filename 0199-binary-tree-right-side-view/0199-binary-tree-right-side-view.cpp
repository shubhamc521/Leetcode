class Solution {
public:
void helper(TreeNode* root,int level, vector<int>&t)
{
     if(root==NULL) return ;
        if(t.size()==level) t.push_back(root->val);
        helper(root->right, level+1,t);
        helper(root->left, level+1,t);

}
    vector<int> rightSideView(TreeNode* root) {
    if(!root)
    return {};

    vector<int>t;
    
   helper(root,0,t);      

    return t;
     }
};