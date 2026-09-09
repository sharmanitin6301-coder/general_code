class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        string s ="";
         string s1 ="";
        for(int i=0;i<words.size();i++){
            bool val = true;
            s = words[i];
            int j =0;
            int k = s.size()-1;
            while(j<=k){
                if(s[j]==s[k]){
                    j++;
                    k--;
                }
                else{
                val = false;
                break;
                }
            }
            if(val)
            return words[i];
        }
        return  s1;
    }
};