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
void postOrder(TreeNode* root , vector<int>& result){
    if(root == NULL){
        return ;
    }
    //for left part
    postOrder(root->left , result);
    //for right part
    postOrder(root->right , result);
    // push the result in the result
    result.push_back(root->val);
}

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> result;
       postOrder(root , result);
        return result;
        
    }
};