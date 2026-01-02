class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ps = 0, pt = 0;
        while(ps < s.size() && pt < t.size()){
            if(s[ps]==t[pt]){
                ps++;
                pt++;
            }else{
                pt++;
            }
        }
        if(ps == s.size()){
            return true;
        }else{
            return ps==s.size();
        }
    }
};