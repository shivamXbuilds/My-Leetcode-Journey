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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int PostorderIndex = postorder.size() - 1;
        for(int i=0;i<inorder.size();i++)
        {
            InorderIndex[inorder[i]] = i;
        }

        return build(inorder, postorder, 0, InorderIndex.size() - 1,PostorderIndex);
    }

    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int left, int right, int &PostorderIndex)
    {
        if(left>right) return nullptr;

        int rootval = postorder[PostorderIndex--];

        TreeNode* root = new TreeNode(rootval);

        int index = InorderIndex[rootval];

        root->right = build(inorder, postorder, index+1, right,PostorderIndex);
        root->left = build(inorder, postorder, left, index-1,PostorderIndex);

        return root;
    }
};
