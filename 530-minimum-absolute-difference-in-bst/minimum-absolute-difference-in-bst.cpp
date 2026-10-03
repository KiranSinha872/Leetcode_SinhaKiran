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
    void inOrder(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return;

        inOrder(root->left, ans);
        ans.push_back(root->val);
        inOrder(root->right, ans);
    }

    int getMinimumDifference(TreeNode* root) {
        vector<int> ans;
        
        inOrder(root, ans);

        // Start with the highest possible number instead of 0
        int mini = INT_MAX;

        // Since inOrder makes the vector perfectly sorted, 
        // the smallest difference is ALWAYS between two numbers sitting side-by-side.
        for (int i = 0; i < ans.size() - 1; i++) {
            mini = min(mini, ans[i + 1] - ans[i]);
        }
        
        return mini;
    }
};