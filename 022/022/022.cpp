// 022.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	vector<string> generateParenthesis(int n) {
		vector<string> res;
		if (n == 0)
		{
			return res;
		}
		backtrack(res, "", 0, 0, n);
		return res;
	}
	void backtrack(vector<string>&list, string t, int l, int r, int max)
	{
		if (t.length() == 2 * max)
		{
			list.push_back(t);
			return;
		}
		else
		{
			if (l < max)
			{
				backtrack(list, t + '(', l + 1, r, max);
			}
			if (r < l)
			{
				backtrack(list, t + ')', l, r + 1, max);
			}
		}
	}

};

int main()
{
    return 0;
}

