//A binary tree is balanced if, for all nodes in the tree, 
//the difference between left and right subtree height is not more than 1.

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
    int dfs(TreeNode* root)
    {
        if(root == NULL)
        return 0;

        int l = dfs(root->left);
        
        // and these will handle ki aage se -1 ayya toh -1 hi dena hoga answer nikalne ki koi need nahi h
        if(l == -1)
        return -1;

        int r = dfs(root->right);

        if(r == -1)
        return -1;

        // yaha se -1 return hona chalo hoga 

        if(abs(l - r)>1)
        return -1;

        /// ye h jo answer nikal raha h 
        return 1 + max(l,r);
    }

    bool isBalanced(TreeNode* root) {

        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL);

        if(dfs(root)==-1)
        return false;
        else
        return true;

    }
};

// time complexity. - O(N)
// SPACE COMPLEXITY - O(1) + O(H) H - SATCK SPACE()height of binary tree (not tree)