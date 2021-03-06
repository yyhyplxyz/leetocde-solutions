// 015.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		vector<vector<int>> res;
		if (nums.size() < 3)
			return res;
		sort(nums.begin(), nums.end());
		for (int i = 0; i < nums.size() - 2; i++)
		{
			if (i == 0 ||(i > 0 && (nums[i] != nums[i - 1])))
			{
				int target = -nums[i];
				int low = i + 1;
				int high = nums.size() - 1;
				while (low < high)
				{
					if (nums[low] + nums[high] == target)
					{
						res.push_back(vector<int>{nums[i], nums[low], nums[high]});
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
					else if (nums[low] + nums[high] > target)
						high--;
					else
						low++;
				}
			}
			
		}
		return res;
	}
};

int main()
{
	vector<int> s = { -1, 0, 1, 2,- 1,4};
	Solution b;
	vector<vector<int>> res = b.threeSum(s);

    return 0;
}

