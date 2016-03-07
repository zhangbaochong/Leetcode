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
	vector<int> preorderTraversal(TreeNode* root) {
		vector<int> vec;
		if (!root)
			return vec;
		stack<TreeNode*> stackVec;
		stackVec.push(root);
		while (!stackVec.empty())
		{
			TreeNode *tmp = stackVec.top();
			vec.push_back(tmp->val);
			stackVec.pop();
			if (tmp->right)
				stackVec.push(tmp->right);
			if (tmp->left)
				stackVec.push(tmp->left);
		}
		return vec;
	}
};