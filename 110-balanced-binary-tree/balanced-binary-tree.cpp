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
    int depth(TreeNode* root){
        // edge case end of tree
        if(root == nullptr){
            return 0;
        }
        // left tree ka depth 
        int ld = depth(root-> left);
        // right tree ka depth 
        int rd = depth(root-> right);

        if(ld==-1 || rd == -1){
            return -1;
        }
        if(ld - rd >1 || ld - rd<-1){
            return -1;
        }

        return (max(ld, rd) +1);
        
    }

    bool isBalanced(TreeNode* root) {
        if(root == nullptr) return true;
        int x = depth ( root );
        if(x == -1)
        {
            return false;
        }
        else {
            return true;
        }
    }
};