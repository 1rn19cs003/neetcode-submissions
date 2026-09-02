class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<1)
            return 0;
        int prev=prices[0];
        int n=prices.size();
        int ans=-1;
        for(int i=1;i<n;i++){
            if(prev<prices[i])
                ans=max(ans,prices[i]-prev);
            else
                prev=prices[i];
        }
        if(ans>0)
            return ans;
        else
            return 0;
    }
};
