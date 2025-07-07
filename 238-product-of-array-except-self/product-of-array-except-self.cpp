class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int product = 1, zeroCount = 0;

        // Calculate product of non-zero elements and count zeros
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                zeroCount++;
            } else {
                product *= nums[i];
            }
        }

        vector<int> ans(n, 0);

        if (zeroCount > 1) return ans;  // All elements are 0 if >1 zero

        for (int i = 0; i < n; i++) {
            if (zeroCount == 0) {
                ans[i] = product / nums[i];
            } 
            else if (nums[i] == 0) {
                ans[i] = product;  // Only the zero index gets the product
            } 
            else {
                ans[i] = 0;  // All others get 0 when 1 zero is present
            }
        }

        return ans;

        
        
        
        // my failed attempt
        
        // int product = 1;
        // int n = nums.size();
        // for(int i = 0; i < n; i++){
        //     if(nums[i]==0) continue;
        //     product = product * nums[i];
        // }
        // for(int i = 0; i < n; i++){
        //     if(nums[i]==0) {
        //         nums[i] = product;
        //         continue;
        //     }
        //     nums[i] = product / nums[i];
        // }
        // return nums;
    }
};