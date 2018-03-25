// 012.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	string intToRoman(int num) {
		int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
		string strings[] = { "M","CM", "D","CD","C","XC","L","XL","X","IX","V","IV","I" };
		string res;
		for (int i = 0; i < 13; i++)
		{
			while (num >= values[i])
			{
				num -= values[i];
				res += strings[i];
			}
		}
		return res;
	}
};
int main()
{
	int a = 89990;
	Solution b;
	cout << b.intToRoman(a);
    return 0;
}

