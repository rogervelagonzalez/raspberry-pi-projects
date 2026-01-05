#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> myList;
        string sResult;
        int n = nums.size();
        if (n == 0){
            return myList;
        }
        int startLeft = nums[0];

        for (int i = 1; i <= n; i++) {
            if(i==n || nums[i] != nums[i-1] + 1){
                if(nums[i-1] == startLeft){
                    sResult = to_string(startLeft);
                }else{
                    sResult = to_string(startLeft) + "->" + to_string(nums[i-1]);
                }
                myList.push_back(sResult);
                if(i < n){
                    startLeft = nums[i];
                }
            }
        }
        return myList;
    }
};