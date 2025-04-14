/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int height(TreeNode* root){
            if (root==nullptr) return 0;
            return 1+max(height(root->left), height(root->right));
        }
        void fun(TreeNode* root, int level, vector<vector<int>>&ans){
            if(root==nullptr) return;
            ans[level].push_back(root->val);
            fun(root->left, level+1, ans);
            fun(root->right, level+1, ans);
        }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int h=height(root);
        vector<vector<int>>ans(h);
        fun(root, 0, ans);
        return ans;
    }
};