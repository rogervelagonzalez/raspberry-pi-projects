#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;
        string result;

        while (i >= 0 || j >= 0 || carry) {
            int bitA = (i >= 0) ? a[i] - '0' : 0;
            int bitB = (j >= 0) ? b[j] - '0' : 0;

            int sum = bitA + bitB + carry;
            result.push_back((sum % 2) + '0');
            carry = sum / 2;

            i--;
            j--;
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
/*

int bitA = (i >= 0) ? a[i] - '0' : 0;

Equivalent to:

int bitA;
if (i >= 0)
    bitA = a[i] - '0';
else
    bitA = 0;

*/