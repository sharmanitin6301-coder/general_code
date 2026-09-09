class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000)
        return 0;
        long long ans = 0;
        long long c = 1000;
        while(c<=n){
            ans = ans + (n-c+1);
            c = c*1000;
        }
        return ans;
    }
};