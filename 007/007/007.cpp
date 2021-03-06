// 007.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	int reverse(int x) {
		long long res = 0;
		while (x)
		{
			res *= 10;
			res += x % 10;
			x /= 10;
		}
		if (res >= INT_MAX)
			return 0;
		if (res <= INT_MIN)
			return 0;
		return (int)res;
	}
};

int main()
{
	int a;
	cin >> a;
	cout << INT_MAX;
	Solution b;
	cout << b.reverse(a);
    return 0;
}

