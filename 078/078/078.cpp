// 078.cpp: 定义控制台应用程序的入口点。
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
			tmp.push_back(nums[i]);
			dfs(res, tmp, nums, i + 1);
			tmp.pop_back();
		}
	}
	vector<vector<int>> subsets(vector<int>& nums) {
		vector<vector<int>> res;
		if (nums.size() == 0)
			return res;
		dfs(res, vector<int>{}, nums, 0);
		return res;
	}
};

int main()
{
	vector<int> a =  {1, 2, 3, 4};
	Solution b;
	b.subsets(a);
    return 0;
}

