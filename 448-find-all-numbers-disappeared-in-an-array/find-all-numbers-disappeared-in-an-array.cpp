class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        int* arr = new int[nums.size()]();

        for(int i = 0; i < nums.size(); i++){
            arr[nums[i] - 1]++;
        }

        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++){
            if(arr[i] == 0){
                ans.push_back(i+1);
            }
        }
        delete[] arr;
        return ans;


        // vector<int> ans;
        // sort(nums.begin(), nums.end());
        // for(int i = 0; i<nums.size()-1; i++){
        //     if(nums[i]==nums[i+1]){
        //         continue;
        //     }
        //     else if(nums[i]+1==nums[i+1]){
        //         continue;
        //     }else{
        //         int n = nums[i+1] - nums[i] - 1;
        //         int x = nums[i]+1;
        //         while(n--){
        //             ans.push_back(x++);
        //         }
        //     }
        // }
        // return ans;
    }
};