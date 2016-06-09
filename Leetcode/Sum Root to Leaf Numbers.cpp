/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	int sumNumbers(TreeNode* root) {
		return DFS(root, 0);
	}

	int DFS(TreeNode* root, int sum)
	{
		if (!root)
			return 0;
		int newSum = sum * 10 + root->val;
		if (!root->left && !root->right)
			return newSum;
		return DFS(root->left, newSum) + DFS(root->right, newSum);
	}
};