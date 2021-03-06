// 017.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	vector<string> mapping{ "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	void dfs(vector<string>& res, string digits, string tmp, int index)
	{
		if (index == digits.size())
		{
			res.push_back(tmp);
			return;
		}
		else
		{
			string candidiate = mapping[digits[index] - '0'];
			for (int i = 0; i < candidiate.length(); i++)
			{
				dfs(res, digits, tmp + candidiate[i], index + 1);
			}
		}
	}
	vector<string> letterCombinations(string digits) {
		vector<string> res;
		if (digits.size() == 0)
			return res;

		dfs(res, digits, "", 0);
		return res;
	}
};

class Solution2 {
public:
	vector<string> mapping{ "0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };
	vector<string> letterCombinations(string digits) {
		vector<string> res;
		if (digits.size() == 0)
			return res;
		queue<string> queue;
		queue.push("");
		while (!queue.empty())
		{
			for (int i = 0; i < queue.size(); i++)
			{
				string tmp = queue.front();
				queue.pop();
				if (tmp.size() == digits.size())
				{
					res.push_back(tmp);
				}
				else
				{
					int location = digits[tmp.size()] - '0';
					for (int i = 0; i < mapping[location].size(); i++)
					{
						queue.push(tmp + mapping[location][i]);
					}
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

