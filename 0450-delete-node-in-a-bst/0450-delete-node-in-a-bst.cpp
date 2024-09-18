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
TreeNode* minValueOfTree(TreeNode* root){
    TreeNode*temp = root;
    while(temp->left !=NULL){
        temp = temp->left;
    }
    return temp;
}

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root == NULL)
       return root;

       if(root->val == key){
        //0child
        if(root->left == NULL && root->right ==NULL){
            delete root;
            return NULL;
        }

        //1child this having 2 cases
        //having only left child
        if(root->left !=NULL && root->right == NULL){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }

        //having only right child
        if(root->right != NULL && root->left  == NULL){
            TreeNode* temp = root->right;
            delete root;
            return temp;

        }


        //2child
        if(root->left != NULL && root ->right != NULL){
            int minimumVal = minValueOfTree(root->right)->val;
            root->val = minimumVal;
            root->right = deleteNode(root->right, minimumVal);
            return root;

        }


       }
       else if(root->val > key){
        //left part me jao
        root->left = deleteNode(root->left ,key);
        return root;
       }
       else{
        //right part me jao
        root->right = deleteNode(root->right , key);
        
       }
       return root;
    }
        
};