class Solution {
public:
    bool add(TreeNode* node, int targetSum, int sum){
        if(node == nullptr){
            return false;
        }
        if(node -> left == nullptr && node -> right == nullptr){
            if(sum + node->val == targetSum){
                return true;
            }
            else{
                return false;
            }
        }
        sum += node -> val;
        bool l = add(node->left, targetSum, sum);
        bool r = add(node->right, targetSum, sum);

        return l || r;
    }

    bool hasPathSum(TreeNode* root, int targetSum) {
        return add(root, targetSum, 0);
        
    }

};