class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
       int sum = 0;
       int count = 0;
       for(int i=0;i<nums.size();i++){
        sum = sum+nums[i];
        int k = nums[i];
        while(k>0){
            count = count + k%10;
            k = k/10;
        }
       } 
        return abs(sum-count);
    }
};