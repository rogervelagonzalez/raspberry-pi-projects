#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        string cleanS = "";
        int count = 0;
        for(int i = 0; i<(int)s.size(); i++){
            if(isalnum(s[i])){
                cleanS.push_back(tolower(s[i]));
                count++;
            }
        }
        cout << cleanS << endl;
        int right = (int)cleanS.size()-1;
        int k = 0;
        while(left<right){
            if(cleanS[left]!=cleanS[right]){

                cout << "Left: "<< cleanS[left] << left << " Right: " << cleanS[right] << right << "Position: " << k << endl;
                return 0;
            }
            k++;
            left++;
            right--;
        }
        return 1;
    }
};