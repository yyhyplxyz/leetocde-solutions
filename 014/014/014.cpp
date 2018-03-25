// 014.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.size() == 0)
			return "";
		string res = strs[0];
		for (int i = 1; i < strs.size(); i++)
		{
			while (strs[i].find(res) != 0)
			{
				int tmp = res.length();
				res = res.substr(0, tmp - 1);
			}
		}
		return res;
	}
	};
int main()
{

    return 0;
}

