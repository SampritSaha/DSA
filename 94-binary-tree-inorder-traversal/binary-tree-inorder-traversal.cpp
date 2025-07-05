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
    void solve(vector<int> &ans, TreeNode* node){
        
        if (node == nullptr){
            return;
        }
        solve(ans, node->left);       // Left
        ans.push_back(node->val);     // Node (mid)
        solve(ans, node->right);     
        
        
        // //edge
        // if(node->left == nullptr){
        //     ans.push_back(node->val);
        // }
        // if(node->right == nullptr){
        //     return ans;
        // }
        // //left
        // solve(ans, node->left);
        // //mid
        // ans.push_back(node->val);
        // //right
        // solve(ans, node->left);

        // return ans;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        solve(ans, root);
        return ans;
    }
};