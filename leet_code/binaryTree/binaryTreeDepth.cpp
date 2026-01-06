
// * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int depthRight = maxDepth(root->right);
        int depthLeft = maxDepth(root->left);
        if(depthRight >= depthLeft){
            return 1+depthRight;
        }else{
            return 1+depthLeft;
        }
    }
};