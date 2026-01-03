#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> seen;
        //set<int> setN;
        int j = 0;
        for(int i = 0; i < (int)nums.size(); i++){
            auto it = seen.find(nums[i]);
            if(it != seen.end()){
                if(i-seen[nums[i]] <= k){ // i is always increasing so we can erase abs() to optimize
                    return true;
                }
                seen[nums[i]] = i;
            }else{
                seen.insert({nums[i], i});
            }
        }
        return false;
    }
};