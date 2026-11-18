class Solution {
private:
    int maxPathDown(TreeNode* node,int& maxi){
        if(node == nullptr) return 0;
        int left = max(0,maxPathDown(node -> left,maxi));
        int right = max(0,maxPathDown(node->right,maxi));
        maxi = max(maxi,left+right+node->val);
        return max(left,right)+node -> val;
    }
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPathDown(root,maxi);
        return maxi;
    }
};