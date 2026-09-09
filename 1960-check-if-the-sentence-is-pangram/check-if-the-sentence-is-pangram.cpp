class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26)
        return false;
        set<int> s;
        for(int i=0;i<sentence.size();i++){
                s.insert(sentence[i]);
        }
        if(s.size()==26)
        return true;
        else
        return false;
    }
};