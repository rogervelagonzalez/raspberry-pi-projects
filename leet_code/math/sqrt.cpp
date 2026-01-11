#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        if(x < 1){
            return 0;
        }
        int candidate = 0;
        int left = 0;
        int right = 46340;
        int mid = 0;
        while(left <= right){
            mid = left + (right - left)/2;
            if(mid == (x/mid)){
                return mid;
            }else if(mid > (x/mid)){
                right = mid-1;
            }else if(mid < (x/mid)){
                left =  mid+1;
                candidate = mid;
            }
        }
        return candidate;
    }
};