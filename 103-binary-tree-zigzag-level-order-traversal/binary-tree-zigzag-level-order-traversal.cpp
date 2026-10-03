class Solution {
public:
    void levelOrder(TreeNode* root, vector<vector<int>>& ans) {
        if (root == NULL) return;

        queue<TreeNode*> q;
        q.push(root);

        int levelNum = 1; // Level 1 is odd (Root level)

        while (!q.empty()) {
            vector<int> level;
            int n = q.size();

            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                level.push_back(node->val);

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }

            // If level is even, reverse it
            if (levelNum % 2 == 0) {
                reverse(level.begin(), level.end());
            }

            ans.push_back(level);
            levelNum++; // Move to the next level
        }
    }

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        levelOrder(root, ans);
        return ans;
    }
};