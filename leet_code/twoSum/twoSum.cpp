#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        vector<int> solution = {0, 0};
        for (int i=0; i<(int)nums.size(); i++){
            for(int y=0; y<(int)nums.size(); y++){
                if(nums[i]+nums[y]==target && i!=y){
                    solution[0] = i;
                    solution[1] = y;
                    return solution;
                }
            }
        }
        return solution;
    };
};