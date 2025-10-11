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
    unordered_map<int,int>InorderIndex;
    int PreorderIndex = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i=0;i<inorder.size();i++)
        {
            InorderIndex[inorder[i]] = i;
        }

        return build(preorder,inorder,0,InorderIndex.size() - 1);
    }

    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int left, int right)
    {
        if(left > right) return nullptr;

        int rootval = preorder[PreorderIndex++];
        TreeNode* root = new TreeNode(rootval);

        int index = InorderIndex[rootval];
        root->left = build(preorder, inorder, left, index - 1);
        root->right = build(preorder, inorder,index + 1, right);
        return root;
    }
};
