class Solution {
public:
    int height(TreeNode* root){
        //Base Case
        if(root == NULL){
            return 0;
        }
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);
        int height1 = max(leftHeight,rightHeight) + 1;
        return height1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        //Base Case
        if(root == NULL){
            return 0;
        }
        int option1 = diameterOfBinaryTree(root -> left);
        int option2 = diameterOfBinaryTree(root -> right);
        int option3 = height(root->left) + height(root->right);
        int diameter = max(option1,max(option2,option3));
        return diameter;
    }
};
