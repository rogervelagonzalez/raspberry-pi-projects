#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int mirror = 0;
        int copy = x;
        if(x < 0 || (x%10 == 0 && x != 0)){
            return false;
        }

        while(mirror < x){
            mirror = mirror*10 + (x%10);
            x /= 10;
        }
        return (x == mirror || (x == mirror / 10));
    }
};