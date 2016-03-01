/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;(
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class Solution {
public:
	void RootPath(vector<string>& resultVec, TreeNode *root, string s)
	{
		if (root->left == NULL && root->right == NULL)
		{
			resultVec.push_back(s);
			return;
		}
		if (root->left)
		{
			RootPath(resultVec, root->left, s + "->" + to_string(root->left->val));
		}
		if (root->right)
		{
			RootPath(resultVec, root->right, s + "->" + to_string(root->right->val));
		}
	}

	vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> result;
		if (root == NULL) return result;
		RootPath(result, root, to_string(root->val));
		return result;
	}
};