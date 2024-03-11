//**********************WHERE BFD *******************************************

//**********************WHERE DFS FAILS*******************************************
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

 // first choice right ja ke peeche wale left me koi child right view me ho sakta h

//      1
//     / \ 
//    2   3
//   / 
//  4
class Solution {
public:
    void dfs(TreeNode* root,vector<int> &ans)
    {
       if(root == NULL)
       return;

       if(root->right)
       {
            ans.push_back(root->right->val);
            dfs(root->right,ans);
       }
       else if(root->left)
       {
           ans.push_back(root->left->val);
           dfs(root->left,ans);
       }
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root)
        {
            ans.push_back(root->val);
            dfs(root,ans);
        }

        return ans;
    }
};