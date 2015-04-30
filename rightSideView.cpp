int result[1000];
int dfs(TreeNode* root, int d){
    return root?((result[d] = root->val), (1 + max(dfs(root->right, d + 1), dfs(root->left, d + 1)))):0;
}
struct Solution {
    vector<int> rightSideView(TreeNode *root) {
        return vector<int>(result, result + dfs(root, 0));
    }
};
