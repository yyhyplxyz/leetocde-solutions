// 028.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	int strStr(string haystack, string needle) {
		if (haystack == "" && needle.size() == 0)
			return 0;
		//cout << haystack.size() - needle.size();
		if ((haystack.size() < needle.size()))
			return -1;
		for (int i = 0; i < haystack.size() - needle.size() + 1; i++)
		{
			string tmp = haystack.substr(i, needle.size());
			if (!tmp.compare(needle))
				return i;
		}
		return -1;
	}
};

int main()
{
	string a = "aaa";
	string b = "aaaa";
	Solution c;
	c.strStr(a, b);
    return 0;
}

