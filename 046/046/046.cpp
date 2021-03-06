// 046.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	void dfs(vector<vector<int>>&res, vector<int>& nums,  int start)
	{
		if (start == nums.size())
		{
			res.push_back(nums);
			return;
		}
		for (int i = start; i < nums.size(); i++)
		{
			swap(nums[start], nums[i]);
			dfs(res, nums, start + 1);
			swap(nums[start], nums[i]);
		}
	}
	vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> res;
		if (nums.size() == 0)
			return res;
		dfs(res, nums,0);
		return res;
	}
};

int main()
{
    return 0;
}

