#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, bool> seen;
        while(n > 1){
            int nn = n;
            n=0;
            while(nn > 0){
                n += (nn%10)*(nn%10);
                nn /= 10;
            }
            auto it = seen.find(n);
            if (it != seen.end() && n!=1){
                return false;
            }else{
                seen.insert({n,1});
            }
        }
        return true;
    }
};