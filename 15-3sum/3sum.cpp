class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;

        for(int i = 0; i<n-2; i++){
            if(nums[i]>0){
                break;
            }
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int j = i+1, k = n-1;

            while(k>j){
                if(nums[i]+nums[j]+nums[k]>0){
                    k--;
                }
                else if(nums[i]+nums[j]+nums[k]<0){
                    j++;
                }
                else{
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j - 1]) j++;
                    while(j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }

         return ans;

        // brut force by me O(n3)
        // for (int i = 0; i < n - 2; i++) {
        //     for (int j = i + 1; j < n - 1; j++) {
        //         for (int k = j + 1; k < n; k++) {
        //             int a = nums[i], b = nums[j], c = nums[k];
        //             if (a + b + c == 0) {
        //                 vector<int> triplet = {a, b, c};
        //                 sort(triplet.begin(), triplet.end());
        //                 uniqueTriplets.insert(triplet);
        //             }
        //         }
        //     }
        // }

       
    }
};