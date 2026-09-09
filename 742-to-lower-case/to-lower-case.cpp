class Solution {
public:
    string toLowerCase(string s) {
        string p ="";
        for(int i=0;i<s.size();i++){
                p += tolower(s[i]);
        }
        return p;
    }
};