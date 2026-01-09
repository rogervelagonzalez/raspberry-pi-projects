#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int sizeV = nums.size();
        if(sizeV==0){
            return 0;
        }
        for(int i = 0; i<sizeV; i++){
            if(nums[i] > target || nums[i]==target){
                return i;
            }else if(nums[i]<target && i == sizeV-1){
                return i+1;
            }
        }
        return sizeV;
    }
};