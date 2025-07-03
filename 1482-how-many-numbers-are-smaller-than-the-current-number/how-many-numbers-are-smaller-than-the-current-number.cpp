class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
         int n = nums.size();
        vector<int> copy = nums;
        sort(copy.begin(), copy.end());

        unordered_map<int, int> indexMap;

        for (int i = 0; i < n; i++) {
            // Only assign the first occurrence to get the count of smaller numbers
            if (indexMap.find(copy[i]) == indexMap.end()) {
                indexMap[copy[i]] = i;
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(indexMap[nums[i]]);
        }

        return ans;
        
        
        //brutforce
        // vector<int> ans(nums.size(), 0);
        // for(int i=0; i<nums.size(); i++){
        //     for(int j = 0; j<nums.size(); j++){
        //         if(nums[i] > nums[j]){
        //             ans[i]++;
        //         }
        //     }
        // }
        // return ans;
    }
};