class Solution {
public:
    int mini=-1e5;
    vector<int> solve(TreeNode *&root){
        //base case
        if(root==NULL)return {mini,mini};
        
        vector<int>ans(2);
        vector<int>left  = solve(root->left);
        vector<int>right = solve(root->right);
        
        //ans[0] = only one side root path
        //ans[0] = root , root+leftSubtree , root+rightSubtree
        ans[0] = max({root->val,root->val+left[0],root->val+right[0]});
        
        // ans[1] =  maintaining all maximum values which  will not 
        // contribute to its parent node to make a path obviosly
        ans[1] = max({root->val,left[1],right[1],
                      root->val+left[0]+right[0],
                      root->val+left[0],root->val+right[0]});
        return ans;
    }
    int maxPathSum(TreeNode* root) {
        vector<int>ans = solve(root);
        return max(ans[0],ans[1]);
    }
};