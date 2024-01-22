//Given the root of a binary tree, invert the tree, and return its root.

//https://leetcode.com/problems/invert-binary-tree/description/

#include<bits/stdc++.h>
using namespace std;
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root){
            invertTree(root->left);
            invertTree(root->right);
            swap(root->left,root->right);
        }
        return root;
        
    }
};