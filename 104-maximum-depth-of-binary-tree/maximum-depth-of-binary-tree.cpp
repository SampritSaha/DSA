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
    int  solve (int depth, int maxDepth, TreeNode* root){
        if(root == nullptr)
        {
            return depth;
        }
        depth++;
        int a = solve(depth, maxDepth, root->left);
        int b = solve(depth, maxDepth, root->right);

        return max(a, b);     
    }

    int maxDepth(TreeNode* root) 
    {
        if(root == nullptr){
            return 0;
        } 
        
        int depth = 0;
        int maxDepth = 0;

        int ans = solve(depth, maxDepth, root);

        return ans;
    }
};