class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=prices[0];int mp=0;
        for(int i=0;i<prices.size();i++){
            int cost=prices[i]-mini;
            mp=max(cost,mp);
            mini=min(mini,prices[i]);
        }
    return mp;
    }

};