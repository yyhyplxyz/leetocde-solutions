// 039.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	void dfs(vector<vector<int>>& res, vector<int>tmp, int target, int start, vector<int>& candidates)
	{
		if (target < 0)
			return;
		if (target == 0)
		{
			res.push_back(tmp);
			return;
		}
		for(int i = start; i < candidates.size(); i++)
		{
			tmp.push_back(candidates[i]);
			dfs(res, tmp, target - candidates[i], i, candidates);
			tmp.pop_back();
		}
	}
	vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
		vector<vector<int>> res;
		dfs(res, vector<int>{}, target, 0, candidates);
		return res;
	}
};


int main()
{
    return 0;
}

