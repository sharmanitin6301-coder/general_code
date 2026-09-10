class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int count = 0;
        int i = 0;
        int k = 1;
        while(k<prices.size()){
            if(prices[i]<prices[k])
            count = count + (prices[k]- prices[i]);
            i++;
            k++;
        }
        return count;
    }
};