// 216.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	void dfs(vector<vector<int>>& res, vector<int>tmp,int k, int n, int start)
	{
		if (k == 0 && n == 0)
		{
			res.push_back(tmp);
			return;
		}
		for (int i = start; i <= 9; i++)
		{
			tmp.push_back(i);
			dfs(res, tmp, k - 1, n - i, i + 1);
			tmp.pop_back();
		}
	}
	vector<vector<int>> combinationSum3(int k,int n) {
		vector<vector<int>> res;
		dfs(res, vector<int>{}, k, n, 1);
		return res;
	}
};

int main()
{
    return 0;
}

