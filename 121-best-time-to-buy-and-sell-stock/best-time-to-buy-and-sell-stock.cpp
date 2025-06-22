class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        
        for (int price : prices) {
            minPrice = min(minPrice, price); // track the lowest price so far
            maxProfit = max(maxProfit, price - minPrice); // check profit if sold today
        }
        
        return maxProfit;
        
        
        
        // brute force solution given by me
        // int max = 0;
        // int profit;
        // for(int i=0; i<prices.size()-1; i++){
        //     for(int j=i+1; j<prices.size(); j++){
        //         profit = prices[j] - prices[i];
        //         if(profit>max){
        //             max = profit;
        //         }
        //     }
        // }
        // return max;
    }
};