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
class Solution
{
public:
    void revpre(TreeNode *root, int level, vector<int> &ans)
    {
        if (root == 0)
            return;

        if (ans.size() == level)
            ans.push_back(root->val);

        revpre(root->right, level + 1, ans);
        revpre(root->left, level + 1, ans);
    }
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> ans;
        if (root == 0)
            return ans;

        revpre(root, 0, ans);
        return ans;
    }
};