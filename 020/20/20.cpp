// 20.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	bool isValid(string s) {
		if (s.size() == 0)
			return true;
		stack<char> mystack;
		for (auto i : s)
		{
			if (i == '(')
			{
				mystack.push(')');
			}
			else if (i == '[')
			{
				mystack.push(']');
			}
			else if (i == '{')
			{
				mystack.push('}');
			}
			else
			{
				char t = mystack.top();
				if (mystack.empty() || t != i)
					return false;
				mystack.pop();
			}
		}
		return mystack.empty();
	}
};


int main()
{
	string s = "[]";
	Solution b;
	b.isValid(s);
    return 0;
}

