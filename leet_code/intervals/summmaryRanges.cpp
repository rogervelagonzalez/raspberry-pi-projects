#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> myList;
        string sResult;
        if(nums.empty()){
            return myList;
        }else if(nums.size() == 1){
            sResult = to_string(nums[0]);
            myList.push_back(sResult);
            return myList;
        }
        int maxRange = 0;
        
        int left = 0, right = 0;
        int candidateLeft = nums[left];
        int candidateRight = nums[right];
        while(right<nums.size()){
            if(nums[right+1]-nums[left] == 1){
                candidateRight = nums[right+1];
                right++;
                left++;
            }else{
                if(candidateLeft != candidateRight){
                    sResult = to_string(candidateLeft) + "->" + to_string(candidateRight);
                }else{
                    sResult = to_string(candidateLeft);
                }
                myList.push_back(sResult);
                if(right < (int)nums.size()){
                    right++;
                }
                left++;
                candidateLeft = nums[left];
                candidateRight = nums[right];
            }
        }
        return myList;
    }
};