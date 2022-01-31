// Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

// According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined 
//between two nodes p and q as the lowest node in T that has both p and q as descendants 
//(where we allow a node to be a descendant of itself).”

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == NULL) return NULL;
        if (root == p || root == q) return root;
        TreeNode* left = lowestCommonAncestor(root->left, p, q); 
        TreeNode* right = lowestCommonAncestor(root->right, p, q); // NULl for the recursion call on 6
        if (left != NULL && right != NULL) return root;
        if (left == NULL) return right;
        return left;
    }
};

//The simple approach here is to use recursive calls - each time we visit a node there is a call being made 

//BASE CASE would be if the root itself is NULL or if the root is equivalent to any of the TreeNodes 
// they already gave us (think about the root here as the CURRENT node you are visiting atm)

//RECURSIVE CASE: 
//Think about having current point to left subtree first, where we call the recursion - checking whether there even the nodes given 
// to us on that particular side of the tree - if yes, then we have found our LCA (we would return root here since its the current node we visited! )
//if that doesn't apply and the left side is indeed NULL, we know for a fact the node is in right and if not we simply return the left 

