#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> charsNote, charsMag;
        for(char c : magazine){
            auto it = charsMag.find(c);
            if (it != charsMag.end()){
                charsMag[c]++;
            }else{
                charsMag.insert({c,1});
            }
        }
        int found = 0;
        for(char c : ransomNote){
            auto it = charsMag.find(c);
            if(it == charsMag.end() || charsMag[c]-1 < 0){
                return false;
            }else{
                charsMag[c]--;
            }
        }
        return true;
    }
};