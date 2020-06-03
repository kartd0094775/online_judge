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
    int maxDepth(TreeNode *root) {
        queue<TreeNode*> q = queue<TreeNode*>();
        int depth = 0;

        if (root != nullptr) q.push(root);
        while (!q.empty()) {
            depth++;
            for(int i(0), n = q.size(); i < n; i++) {
                TreeNode *temp = q.front();
                if(temp->left != nullptr) q.push(temp->left);
                if(temp->right != nullptr) q.push(temp->right);
                q.pop();
            }
        }
        return depth;
    }
};
