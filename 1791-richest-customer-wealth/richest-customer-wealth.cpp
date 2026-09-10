class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = -1;
       
        for(int i=0;i<accounts.size();i++){
             int count = 0;
            for(int j=0;j<accounts[0].size();j++){
               count = count + accounts[i][j]; 
            }
            if(count>max)
            max = count;
        }
        return max;
    }
};