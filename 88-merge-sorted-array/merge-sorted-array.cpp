class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i] < nums2[j]){
                nums1[k] = nums2[j];
                j--;
            }
            else{
                nums1[k] = nums1[i];
                i--; 
            }
            k--;
        }
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        return;


    

        
        
        //no brainer
        // int i=m, j=0;
        // for(;j<n; i++,j++ ){
        //     nums1[i] = nums2[j];
        // }
        // sort(nums1.begin(), nums1.end());
        // return;

        
        
        
        
        
        
        
        // Using another Vector then copyint but gave memory overflow
        
        // vector <int> v;
        // int i=0,j=0;
        // while(i<m && j<n){
        //     if(nums1[i]>nums2[j]){
        //         v.push_back(nums2[j]);
        //     }
        //     else{
        //         v.push_back(nums1[i]);
        //     }
        // }
        // while(i<m){
        //     v.push_back(nums1[i]);
        //     i++;
        // }
        // while(j<n){
        //     v.push_back(nums2[j]);
        //     j++;
        // }
        // for(int i=0; i<m+n; i++){
        //     nums1[i] = v[i];
        // }
        // return;
    }
}; 