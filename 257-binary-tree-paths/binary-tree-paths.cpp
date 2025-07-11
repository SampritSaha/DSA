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
    void path(TreeNode* root, string output, vector <string>& ans){
        if (root == nullptr) return;

        output += to_string(root->val);

        if (root->left == nullptr && root->right == nullptr) {
            ans.push_back(output);
            return;
        }

        output += "->";

        path(root->left, output, ans);
        path(root->right, output, ans);

        return;
    }

    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == nullptr) return{};
        
        string output="";
        vector <string> ans;
        path(root, output, ans);
        return ans;
    }
};