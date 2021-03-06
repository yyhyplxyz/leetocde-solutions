// 047.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;


class Solution {
public:
	void dfs(vector<vector<int>>&res, vector<int> nums, int start)
	{
		if (start == nums.size())
		{
			res.push_back(nums);
			return;
		}
		for (int i = start; i < nums.size(); i++)
		{
			if (i != start && nums[i] == nums[start])
				continue;
			swap(nums[i], nums[start]);
			dfs(res, nums, start + 1);
			//swap(nums[i], nums[start]);
		}
	}
	vector<vector<int>> permuteUnique(vector<int>& nums) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		if (nums.size() == 0)
			return res;
		dfs(res, nums, 0);
		return res;
	}
};


int main()
{
    return 0;
}

