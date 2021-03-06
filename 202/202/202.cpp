// 202.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	bool isHappy(int n) {
		int squaresum;
		int remian;
		set<int> store;
		while (store.find(n) == store.end())
		{
			store.insert(n);
			squaresum = 0;
			while (n > 0)
			{
				remian = n % 10;
				squaresum += remian * remian;
				n /= 10;
			}
			if (squaresum == 1)
				return true;
			else
			{
				n = squaresum;
			}
		}
		return false;
	}
};

int main()
{
    return 0;
}

