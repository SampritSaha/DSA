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
    TreeNode* bst(vector<int>& nums, int s, int e){
        if(s>e){
            return nullptr;
        }
        int mid = (s+e)/2;
        TreeNode* root = new TreeNode;
        root->val = nums[mid];
        root->left = bst(nums,s,mid-1);
        root->right = bst(nums,mid+1,e);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int e = nums.size()- 1;
        int s=0;
        TreeNode* ans = bst(nums, s, e);
        return ans;
    }
};