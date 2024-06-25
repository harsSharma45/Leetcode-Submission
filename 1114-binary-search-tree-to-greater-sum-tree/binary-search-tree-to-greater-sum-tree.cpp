class Solution {
public:
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        reverseInOrderTraversal(root, sum);
        return root;
    }

private:
    void reverseInOrderTraversal(TreeNode* node, int& sum) {
        if (node == nullptr) return;
        reverseInOrderTraversal(node->right, sum);
        sum += node->val;
        node->val = sum;
        reverseInOrderTraversal(node->left, sum);
    }
};

void inOrderTraversal(TreeNode* root) {
    if (root == nullptr) return;
    inOrderTraversal(root->left);
    std::cout << root->val << " ";
    inOrderTraversal(root->right);
}
