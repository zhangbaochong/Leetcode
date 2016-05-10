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
	vector<int> postorderTraversal(TreeNode* root) {
		stack<TreeNode*> s;
		vector<int> nodes;
		TreeNode* cur = root;//u当前访问的结点
		TreeNode* lastNode = NULL;//上次访问的结点 
		while (cur || !s.empty())
		{
			//一直向左走直到为空为止
			while (cur)
			{
				s.push(cur);
				cur = cur->left;
			}
			cur = s.top();
			//如果结点右子树为空或已经访问过，访问当前结点
			if (cur->right == NULL || cur->right == lastNode)
			{
				nodes.push_back(cur->val);
				lastNode = cur;
				s.pop();
				cur = NULL;
			}
			else
				cur = cur->right;
		}
		return nodes;
	}
};