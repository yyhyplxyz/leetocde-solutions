// 139.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	bool wordBreak(string s, vector<string>& wordDict) {
		if (wordDict.size() == 0) return false;

		vector<bool> dp(s.length() + 1, false);
		dp[0] = true;
		for (int i = 1; i <= s.size(); i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (dp[j] && find(wordDict.begin(), wordDict.end(), s.substr(j, i - j)) != wordDict.end())
				{
					dp[i] = true;
					break;
				}
			}
		}
		return dp[s.length()];
	}
};

int main()
{
    return 0;
}

