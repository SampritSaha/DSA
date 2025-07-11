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
    int counter(TreeNode* root){
        if(root == nullptr){
           return 0;
        }
        int l = counter(root->left);
        int r = counter(root->right);
        return l+r+1;
    }
    int countNodes(TreeNode* root) {
        int ans;
        ans = counter(root);
        return ans;
    }
};