class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_diff=0;
        int min_no=prices[0],temp;
        for(int i=0;i<prices.size();i++){
        min_no=min(prices[i],min_no);
        temp=prices[i]-min_no;
        max_diff=max(max_diff,temp);
        }
        return max_diff;
    }
};
