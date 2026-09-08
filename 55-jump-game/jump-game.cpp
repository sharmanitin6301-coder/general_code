class Solution {
public:
    bool canJump(vector<int>& nums) {
        int count = nums.size();
        int k = 0;
        int c = nums[count-1];
        int p=0;
        while(k<count){
                if(k>p)
                return false;
             p = max(p,k+nums[k]);

            if(p>=count-1){
                return true;
            }
            k++;
        }
        return false;
        
    }
};