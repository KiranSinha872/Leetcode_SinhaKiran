/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans = NULL;

    string postorder(TreeNode* root, TreeNode* p, TreeNode* q) {
        string a = "NN";

        if(root == NULL) return a;

        string l = postorder(root->left, p, q);
        string r = postorder(root->right, p, q);

        if(l[0] == 'Y' || r[0] == 'Y' || root == p)
            a[0] = 'Y';

        if(l[1] == 'Y' || r[1] == 'Y' || root == q)
            a[1] = 'Y';

        if(a == "YY" && ans == NULL)
            ans = root;

        return a;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        postorder(root, p, q);
        return ans;
    }
};