#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if(s.size() < 2){
            return false;
        }
        vector<char> seen;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                seen.push_back(s[i]);
            }else if(s[i] == ')'){
                if(seen.size() == 0 || seen.back() != '('){
                    return false;
                }else{
                    seen.pop_back();
                }
            }else if(s[i] == ']'){
                if(seen.size() == 0 || seen.back() != '['){
                    return false;
                }else{
                    seen.pop_back();
                }
            }else if(s[i] == '}'){ 
                if(seen.size() == 0 || seen.back() != '{'){
                    return false;
                }else{
                    seen.pop_back();
                }
            }
        }
        if(seen.empty()){
            return true;
        }else{
            return false;
        }

    }
};