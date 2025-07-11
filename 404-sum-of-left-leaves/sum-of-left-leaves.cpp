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
    void add(TreeNode* root, int* sum){
        if(root == nullptr) return;
        if(root->left && root->left->left == nullptr && root->left->right == nullptr){
            *sum += root->left->val;
        }
        add(root->left, sum);  // always recurse
        add(root->right, sum); // always recurse
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        add(root, &sum);
        return sum;
    }
};