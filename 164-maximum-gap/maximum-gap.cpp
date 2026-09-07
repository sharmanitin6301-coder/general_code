class Solution {
public:
    int maximumGap(vector<int>& nums) {
       if(nums.size()<2)
       return 0;
       sort(nums.begin(),nums.end());
       int max = -1;
       int k = 0;
       int p = 1;
       int c =0;
        for(int i=1;i<nums.size();i++){
            c = nums[p]-nums[k];
            if(max<c)
            max = c;
            k++;
            p++;
        }
        return max;
    }
};