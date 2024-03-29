class Solution {
public:
    int index;
    map<int,int> map;
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,int left,int right){
        if(left>right)
            return NULL;

        int mid = map[postorder[index]];
        TreeNode* curr = new TreeNode(postorder[index--]);

        curr->right = helper(inorder,postorder,mid+1,right);
        curr->left = helper(inorder,postorder,left,mid-1);

        return curr;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        index = inorder.size()-1;

        for(int i=0;i<postorder.size();i++)
            map[inorder[i]]=i;

        return helper(inorder,postorder,0,postorder.size()-1);
    }
};