// Given the root of a binary tree, return the preorder traversal of its nodes' values.

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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> toReturn;
        if (root == NULL) {
            return toReturn; 
        }
        stack<TreeNode*> q;
        q.push(root); 
        while (!q.empty()) {
            TreeNode* top = q.top(); 
            q.pop(); 
            if (top -> right != NULL) {
                q.push(top->right); 
            }
            if (top -> left != NULL) {
                q.push(top->left);
            }
            toReturn.push_back(top->val);
            }
        return toReturn; 
        }
    }; 
