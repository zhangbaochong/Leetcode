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
	vector<vector<int>> levelOrderBottom(TreeNode* root) {
		vector<vector<int>> resultVec;
		if (!root)
			return resultVec;
		int parentSize = 1, childSize = 0;
		int level = 0;
		TreeNode *temp;
		queue<TreeNode*> nodes;
		nodes.push(root);
		resultVec.push_back(vector<int>());
		while (!nodes.empty())
		{
			temp = nodes.front();
			resultVec[level].push_back(temp->val);
			nodes.pop();
			if (temp->left)
			{
				nodes.push(temp->left);
				childSize++;
			}
			if (temp->right)
			{
				nodes.push(temp->right);
				childSize++;
			}
			parentSize--;
			if (parentSize == 0)
			{
				parentSize = childSize;
				childSize = 0;
				level++;
				resultVec.push_back(vector<int>());
			}
		}
		resultVec.erase(resultVec.end() - 1);
		reverse(resultVec.begin(), resultVec.end());
		return resultVec;
	}
};