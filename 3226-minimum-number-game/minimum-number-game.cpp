class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       vector<int> arr;
       int j = 0;
       int k = 1;
       while(k<nums.size()){
            arr.push_back(nums[k]);
            arr.push_back(nums[j]);
            j +=2;
            k +=2;
       } 
       return arr;
    }
};