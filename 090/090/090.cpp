// 090.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	void dfs(vector<vector<int>>&res, vector<int> tmp, vector<int> nums, int index)
	{
		res.push_back(tmp);
		for (int i = index; i < nums.size(); i++)
		{
			if (i == index || nums[i] != nums[i - 1])
			{
				tmp.push_back(nums[i]);
				dfs(res, tmp, nums, i + 1);
				tmp.pop_back();
			}
		}
	}
	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<vector<int>> res;
		sort(nums.begin(), nums.end());
		if (nums.size() == 0)
			return res;
		dfs(res, vector<int>{}, nums, 0);
		return res;
	}
};

class Solution {
public:
	vector<vector<int>> subsetsWithDup(vector<int>& nums) {
		vector<vector<int>> res(1,vector<int>());
		sort(nums.begin(), nums.end());
		if (nums.size() == 0)
			return res;
		int n = res.size();
		for (int i = 0; i < nums.size(); i++)
		{
			int start = (i >= 1 && nums[i] == nums[i - 1]) ? n : 0;
			n = res.size();
			for (int j = start; j < n; j++)
			{
				res.push_back(res[j]);
				res.back().push_back(nums[i]);
			}
		}
		return res;
	}
};

int main()
{
	vector<int> a = { 1,2,2 };
	Solution b;
	vector<vector<int>> c = b.subsetsWithDup(a);
    return 0;
}

