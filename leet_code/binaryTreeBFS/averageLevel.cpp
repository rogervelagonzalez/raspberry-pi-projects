
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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> average;
        if(root==nullptr){
            return average;
        }
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            double sumAverage = 0;
            double nodes = (double)q.size();
            for(int i = 0; i < (int)nodes; i++){
                TreeNode* front = q.front();
                q.pop();
                sumAverage = sumAverage + front->val;
                if(front->left != nullptr){
                    q.push(front->left);
                }
                if(front->right != nullptr){
                    q.push(front->right);
                }
            }
            //sumAverage = sumAverage/nodes;
            average.push_back(sumAverage/nodes);
        }
        return average;
    }
};