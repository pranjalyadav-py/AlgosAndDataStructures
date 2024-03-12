/********************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode {
        public :
        int data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };
    
********************************************************************/
//THERE's a way of finding a single answer thriugh the recursiona and also finding all the answer through the recursion
// single: once the answer found, from any of the single branch just return, no need to make changes in the answer list
// all answer: for every branch or node exoplored we have to make changes in answer list
void getPath(BinaryTreeNode<int> * root, vector < string > & arr, string s) {

  if (!root)
  return;
 
 // for each call push there data to the string
   string r = to_string(root -> data);
   for (int i = 0; i < r.length(); i++) {
       s+=r[i];
   }
   s+=' ';

   // explore all paths
   getPath(root -> left, arr, s);
   getPath(root -> right, arr, s);


   // whenever both the child are NULL then only push to the arr
  if(root->left == NULL && root->right ==NULL)
  {
      arr.push_back(s);
  }
}

vector <string> allRootToLeaf(BinaryTreeNode<int> * root) {
    // Write your code here.
    vector<string> vec;
    string s = "";
    getPath(root,vec,s);
    return vec;
}