class Solution {
public:
    int differenceOfSums(int n, int m) {
        int count = 0;
        int sum = 0;
        for(int i=1;i<=n;i++){
        if(i%m==0)
        count = count + i;
        else
        sum = sum+ i;
    }
    return (sum - count) ;
}
};