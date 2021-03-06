// 008.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	string trim(string& a)
	{
		if (a.empty())
		{
			return a;
		}
		else
		{
			a.erase(0, a.find_first_not_of(' '));
			//a.erase(a.find_last_not_of(' ') + 1);
			return a;
		}
	}
	bool isdigit(char a)
	{
		if (a >= '0' && a <= '9')
			return true;
		return false;
	}
	int myAtoi(string str) {

		long result = 0;
		int indicator = 1;
		int i = str.find_first_not_of(' ');
		if (str[i] == '-' || str[i] == '+')
			indicator = (str[i++] == '-') ? -1 : 1;
			while ('0' <= str[i] && str[i] <= '9')
			{
				result = result * 10 + (str[i++] - '0');
				if (result*indicator >= INT_MAX) return INT_MAX;
				if (result*indicator <= INT_MIN) return INT_MIN;
			}
		return result * indicator;
	}
};

int main()
{
	string a;
	Solution b;
	cin >> a;
	cout << b.myAtoi(a);
}
