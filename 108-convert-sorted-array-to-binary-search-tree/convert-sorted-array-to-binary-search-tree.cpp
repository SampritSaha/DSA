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
    
    TreeNode* buildBST(vector<int>& nums, int left, int right) {
        if (left > right) return nullptr;

        int mid = (left + right) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = buildBST(nums, left, mid - 1);
        root->right = buildBST(nums, mid + 1, right);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return buildBST(nums, 0, nums.size() - 1);
    }

    
    
    
    //not working by me
    // TreeNode* sortedArrayToBST(vector<int>& nums) {

    //     int n = nums.size();
    //     TreeNode* root = new TreeNode(nums[n/2]);

    //     TreeNode* temp = root;
    //     for (int i = n/2-1; i >= 0; i--) {
    //         temp->left = new TreeNode(nums[i]);
    //         temp = temp->left;
    //     }

    //     temp = root;
    //     temp->right = new TreeNode(nums[n-1]);
    //     temp = temp->right;

    //     for (int i = n - 2; i > n/2; i--) {
    //         temp->left = new TreeNode(nums[i]);
    //         temp = temp->left;
    //     }

    //     return root;
    // }
};