// 018.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	vector<vector<int>> fourSum(vector<int>& nums, int target) {
		vector<vector<int>> res;
		if (nums.size() < 4)
			return res;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 3; i++)
		{
			if (i > 0 && nums[i] == nums[i - 1])
				continue;
			for (int j = i + 1; j < nums.size() - 2; j++)
			{
				if (j > i + 1 && nums[j] == nums[j - 1])
					continue;
				int low = j + 1;
				int high = nums.size() - 1;
				while (low < high)
				{
					int sum = target - nums[i] - nums[j];
					if (nums[low] + nums[high] == sum)
					{
						res.push_back(vector<int>{nums[i], nums[j], nums[low], nums[high]});
						while (low < high && nums[low] == nums[low + 1])
						{
								low++;
						}
						while (low < high && nums[high] == nums[high - 1])
						{
								high--;
						}
						low++;
						high--;
					}
					else if (nums[low] + nums[high] < sum)
					{
						low++;
					}
					else
					{
						high--;
					}
				}
			}
		}
		return res;
	}
};
int main()
{
	vector<int> a = { 1,3, 5, 6, 78 , 3 , 4, 2, 1, 0, -1 };
	Solution b;
	b.fourSum(a, 4);
    return 0;
}

