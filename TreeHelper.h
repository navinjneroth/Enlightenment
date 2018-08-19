#pragma once

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class TreeCreate
{
    public:
    TreeNode* CreateTree()
    {
        TreeNode* root = new TreeNode(0);

        root->left = new TreeNode(1);
        root->right = new TreeNode(2);

        root->left->left = new TreeNode(3);
        root->left->right = new TreeNode(4);
        
        root->right->left = new TreeNode(5);
        root->right->right = new TreeNode(6);

        return root;
    }
};