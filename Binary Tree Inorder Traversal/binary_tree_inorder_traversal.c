/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void recursiveFunc(struct TreeNode* root, int *returnArr, int *returnSize)
{
    if (root->left != NULL)
        recursiveFunc(root->left, returnArr, returnSize);
    returnArr[*returnSize] = root->val;
    (*returnSize)++;
    if (root->right != NULL)
        recursiveFunc(root->right, returnArr, returnSize);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){

    int *returnArr = malloc(100 * sizeof(int));

    *returnSize = 0;
    if (root)
        recursiveFunc(root, returnArr, returnSize);
    returnArr = realloc(returnArr, (*returnSize) * sizeof(int));
    return (returnArr);
}
