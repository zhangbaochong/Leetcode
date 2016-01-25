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
	int maxDepth(TreeNode* root) {
		if (root == NULL) return 0;
		else
		{
			int dep1 = maxDepth(root->left);
			int dep2 = maxDepth(root->right);
			if (dep1 < dep2)
				return dep2 + 1;
			else
				return dep1 + 1;
		}
	}
};