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
    int ans = 0;
    int dfs(TreeNode* root)
    {
        if(root ==NULL)
        return 0;

        int l = dfs(root->left);
        int r = dfs(root->right);

        ans = max(ans,l+r);
        return 1 + max(l,r);
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL);

        dfs(root);
        return ans;
    }
};

// Naive approach
// Time Complexity: O(N*N) ( For every node, Height Function is called which takes O(N) time hence for every node it becomes N*N ) 

// Space Complexity: O(1) ( Extra Space ) + O(H) ( Recursive Stack Space where “H” is the height of tree )

// Post Order Traversal
// Yes, as in post-order traversal, we have to completely traverse the left and right subtree before visiting the root node.

// Time Complexity: O(N) 

// Space Complexity: O(1) Extra Space + O(H) Recursion Stack space (Where “H”  is the height of binary tree )  

