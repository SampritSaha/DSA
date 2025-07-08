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
    void trav(TreeNode* node, vector<int> &ans){
        if( node == nullptr){
            return;
        }
        ans.push_back(node->val);
        trav(node->left, ans);
        trav(node->right, ans);
        return;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        trav(root, ans);
        return ans;
    }
};