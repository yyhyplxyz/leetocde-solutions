// 258.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	int addDigits(int num) {
		//int n = num;
		int sum = 0;
		while (num)
		{
			sum += (num % 10);
			num /= 10;
		}
		if (sum >= 10)
			return addDigits(sum);
		else
			return sum;
	}
};

int main()
{
    return 0;
}

