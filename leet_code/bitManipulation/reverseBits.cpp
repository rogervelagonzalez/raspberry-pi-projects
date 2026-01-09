#include<cmath>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/* NOT FINISHED */
class Solution {
public:
    int reverseBits(int n) {
        vector<int> binary;
        int newBit;
        int result;
        while(n > 0){
            newBit = (n%2);
            binary.push_back(newBit);
            n = n / 2;
        }
        for(int y = 0; y < (32 - binary.size()); y++){
            binary.push_back(0);
        }
        int j = 0;
        for(int i = binary.size()-1; i >= 0 ; i--){
            result = result + binary[j]*pow(2,i);
            j++;
        }
        return result;
    }
};