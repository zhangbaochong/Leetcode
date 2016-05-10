/**
* Definition for binary tree
* struct TreeNode {
*     int val;
*     TreeNode *left;
*     TreeNode *right;
*     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
* };
*/
class BSTIterator {
public:
	stack<TreeNode*> st;
	BSTIterator(TreeNode *root) {
		findLeft(root);
	}

	/** @return whether we have a next smallest number */
	bool hasNext() {
		return !st.empty();
	}

	/** @return the next smallest number */
	int next() {
		TreeNode *top = st.top();
		st.pop();
		findLeft(top->right);
		return top->val;
	}

	void findLeft(TreeNode *root)
	{
		TreeNode *p = root;
		while (p)
		{
			st.push(p);
			p = p->left;
		}
	}
};

/**
* Your BSTIterator will be called like this:
* BSTIterator i = BSTIterator(root);
* while (i.hasNext()) cout << i.next();
*/