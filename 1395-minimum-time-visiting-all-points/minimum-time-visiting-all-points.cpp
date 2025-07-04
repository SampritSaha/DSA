class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int n = points.size();
        int ans=0;
        for(int i = 0; i<n-1 ; i++){
            int x1 = points[i][0];
            int y1 = points[i][1];
            int x2 = points[i+1][0];
            int y2 = points[i+1][1];

            int delX = abs(x2-x1);
            int delY = abs(y2-y1);

            if(delX < delY){
                ans = ans + delX + delY - delX;
            }
            else{
                ans = ans + delY + delX - delY;
            }

        }
        return ans;
    }
};