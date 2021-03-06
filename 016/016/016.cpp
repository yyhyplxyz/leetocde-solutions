// 016.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	int threeSumClosest(vector<int>& nums, int target) {
		sort(nums.begin(), nums.end());
		int initial = nums[0] + nums[1] + nums[nums.size() - 1];
		for (int i = 0; i < nums.size() - 2; i++)
		{
			int low = i + 1;
			int high = nums.size() - 1;
			while (low < high)
			{
				int sum = nums[i] + nums[low] + nums[high];
				if (sum > target)
					high--;
				else if (sum < target)
					low++;
				else
					return sum;
				if (abs(target - initial) > abs(target - sum))
				{
					initial = sum;
				}
			}
		}
		return initial;
	}
};


int main()
{
	vector<int>s = { 1,1,1,0 };
	Solution b;
	b.threeSumClosest(s, 100);
    return 0;
}

