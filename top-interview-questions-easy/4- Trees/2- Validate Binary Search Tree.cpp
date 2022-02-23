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
     bool validate(TreeNode* root, long lo, long hi){
         //check node is Null
        if(!root)
            return true;
        //check node's value 
        if(root->val >= hi || root->val <= lo)
            return false;
        //for rigth -> lowest value will be node's value , for left -> highest value will be node's value
        return (validate(root->left, lo, root->val))&&(validate(root->right, root->val, hi));
        
        
    }
    bool isValidBST(TreeNode* root) {
        long lo = LONG_MIN, hi = LONG_MAX;
        return validate(root, lo, hi);
    }
};