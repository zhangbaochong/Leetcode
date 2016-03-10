class Solution {
public:
	int minPathSum(vector<vector<int>>& grid) {
		int n = grid.at(0).size();
		int m = grid.size();
		vector<vector<int>> path(m, vector<int>(n, 0));
		path[0][0] = grid[0][0];
		for (int i = 0; i < m; ++i)
		for (int j = 0; j < n; ++j)
		{
			if (i - 1 < 0 && j - 1 < 0)
				continue;
			else if (i - 1 < 0)
				path[i][j] = grid[i][j] + path[i][j - 1];
			else if (j - 1 < 0)
				path[i][j] = grid[i][j] + path[i - 1][j];
			else
				path[i][j] = grid[i][j] + (path[i - 1][j] < path[i][j - 1] ? path[i - 1][j] : path[i][j - 1]);
		}
		return path[m - 1][n - 1];
	}
};