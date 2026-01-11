#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int i = digits.size()-1;
        while(carry == 1 && i >= 0){
            if(digits[i] < 9){
                digits[i] += carry;
                carry = 0;
            }else{
                digits[i] = 0;
            }
            i--;
        }
        if(carry == 1){
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};