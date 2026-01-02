#include <iostream>
#include <vector>
#include "isPalindrome/isPalindrome.cpp"
using namespace std;



int main() {
    //vector<string> list;
    string s = "A man, a plan, a canal: Panama";
    Solution S;
    bool c = S.isPalindrome(s);
    cout << "Is palindrome? " << (c ? "true" : "false") << endl;

    
    return 0;
}