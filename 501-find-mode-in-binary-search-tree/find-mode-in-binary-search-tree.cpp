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
    void helper(TreeNode* root, map<int,int>& hash){
        if(root == nullptr){
            return;
        }
        hash[root->val] ++;
        helper(root->left, hash);
        helper (root->right, hash);
        return;
    }

    vector<int> findMode(TreeNode* root) {
        map<int,int> hash;
        helper(root, hash);
        
        int maxFreq = 0;
        for (auto& it : hash) {
            maxFreq = max(maxFreq, it.second);
        }

        vector<int> result;
        for (auto& it : hash) {
            if (it.second == maxFreq) {
                result.push_back(it.first);
            }
        }

        return result;
    }

};