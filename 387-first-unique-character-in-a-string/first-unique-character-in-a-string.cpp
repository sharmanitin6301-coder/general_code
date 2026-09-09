class Solution {
public:
    int firstUniqChar(string s) {
        
        for(int i=0;i<s.size();i++){
            bool val = true;
            for(int j=0;j<s.size();j++){
            if(s[i]==s[j]&&i!=j){
                val = false;
                break;
            }
            }
           if(val)
           return i; 
        }
        return -1;
    }
};