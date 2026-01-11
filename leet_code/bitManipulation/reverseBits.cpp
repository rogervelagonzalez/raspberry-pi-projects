#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseBits(int n) {
        int result = 0;
        int newBit;
        for(int i = 0; i < 32; i++){
            newBit = 1&(n>>i);
            result = result << 1;
            result |= newBit;
        }
        return result;
    }
};