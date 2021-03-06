// 013.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	int toNumber(char c) {
		int res = 0;
		switch (c) {
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
		}
		return res;
	}
	int romanToInt(string s) {
		if (s.length() == 0)
			return 0;
		int res = toNumber(s[0]);
		for (int i = 1; i <= s.length() - 1; i++)
		{
			if (toNumber(s[i]) > toNumber(s[i - 1]))
			{
				res += (toNumber(s[i]) - 2 * toNumber(s[i-1]));
			}
			else
				res += toNumber(s[i]);
		}
		return res;
	}
};
int main()
{
    return 0;
}

