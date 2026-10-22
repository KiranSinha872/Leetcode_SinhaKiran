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
    int ans = 0;

    void funct(TreeNode* root, int cur) {
        if (root == NULL) return;

        cur = cur * 10 + root->val;

        if (root->left == NULL && root->right == NULL) {
            ans += cur;
            return;
        }

        funct(root->left, cur);
        funct(root->right, cur);
    }

    int sumNumbers(TreeNode* root) {
        ans = 0;
        funct(root, 0);
        return ans;
    }
};