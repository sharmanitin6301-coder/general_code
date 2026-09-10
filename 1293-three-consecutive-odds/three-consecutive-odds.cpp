class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
      if(arr.size()<3)
      return false;
      int j = 0;
      int k = 1;
      int p = 2;
      while(p<arr.size()){
        if(arr[j]%2!=0&&arr[k]%2!=0&&arr[p]%2!=0)
        return true;
        j++;
        k++;
        p++;
      }  
      return false;
    }
};