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
    void levelSums(TreeNode* root, vector<int>& ans) {
        if (root == NULL) return; 
        
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int n = q.size();
            int sum = 0;

            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                sum = sum + (node->val);
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            ans.push_back(int(sum));
        }
    }

    int maxLevelSum(TreeNode* root) {
        vector<int> ans;
        levelSums(root, ans);

        int mx = *max_element(ans.begin(), ans.end());
        int index = 0; 
        for (int i = 0; i < ans.size(); i++) {
            if (ans[i] == mx) {
                index = i + 1; 
                break;
            }
        }

        return index;
    }
};