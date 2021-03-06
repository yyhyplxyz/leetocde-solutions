// 204.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	int countPrimes(int n) {
		vector<bool> notprime(INT_MAX, false);

		int res = 0;
		for (int i = 2; i < n; i++)
		{
			if (notprime[i] == false)
			{
				res++;
				for (int j = 2; j * i < n; j++)
				{
					notprime[i*j] = false;
				}
			}
		}
		return res;
	}
};


int main()
{
    return 0;
}

