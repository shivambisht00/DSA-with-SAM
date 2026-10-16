class Solution {
public:
    void solve(TreeNode* root, vector<int>& ans) {
        if (root == NULL) {
            return;
        }

        solve(root->left, ans);
        ans.push_back(root->val);
        solve(root->right, ans);
    }

    TreeNode* increasingBST(TreeNode* root) {
        vector<int> ans;
        solve(root, ans);

        TreeNode* dummy = new TreeNode(0);
        TreeNode* curr = dummy;

        for (int val : ans) {
            curr->right = new TreeNode(val);
            curr = curr->right;
        }

        return dummy->right;
    }
};