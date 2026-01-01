#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //vector<int> duplicates;
        int i = 0;
        //vector<int> solution;
        auto it = nums.begin()+1;
        while(it!=nums.end()){
            if(it + 1 < nums.end()){
                if (*it == *(it-1) && *it == *(it+1)){
                    it = nums.erase(it);
                    i++;
                }else{
                    it++;
                }
            }else{
                it++;
            }
        }
        return i;
    }
};