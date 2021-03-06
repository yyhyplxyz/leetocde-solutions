// 077.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	vector<vector<int>> combine(int n, int k) {
		vector<vector<int>> res;
		dfs(res, vector<int>{}, n, k, 1);
		return res;
	}
	void dfs(vector<vector<int>>& res, vector<int> tmp, int n, int k, int start)
	{
		if (k == 0)
		{
			res.push_back(tmp);
			return ;
		}
			for (int i = start; i <= n; i++)
			{
				tmp.push_back(i);
				dfs(res, tmp, n, k - 1, i + 1);
				tmp.pop_back();
			}
	}
};

int main()
{
    return 0;
}

