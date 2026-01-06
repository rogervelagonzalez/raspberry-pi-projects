
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
    int getMinimumDifference(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        vector<int> values;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            int sizeQ = q.size();
            for(int i = 0; i < sizeQ; i++){
                TreeNode* front = q.front();
                q.pop();
                values.push_back(front->val);
                if(front->left != nullptr){
                    q.push(front->left);
                }
                if(front->right != nullptr){
                    q.push(front->right);
                }
            }
        }
        sort(values.begin(), values.end());
        int lowV = values[0];
        int highV = values[1];
        for(int j = 1; j < (int)values.size(); j++){
            if(abs(values[j] - values[j-1]) < abs(highV - lowV)){
                highV = values[j];
                lowV = values[j-1];
            }
        }
        return highV-lowV;
    }
};

/* CHAT GPT SOLUTION
class Solution {
public:
    int minDiff = INT_MAX;
    TreeNode* prev = nullptr;

    void inorder(TreeNode* root) {
        if (root == nullptr) return;

        inorder(root->left);

        if (prev != nullptr) {
            minDiff = min(minDiff, root->val - prev->val);
        }
        prev = root;

        inorder(root->right);
    }

    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        return minDiff;
    }
};
*/