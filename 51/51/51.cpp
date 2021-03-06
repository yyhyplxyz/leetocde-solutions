
// 51.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	bool isvalid(vector<int> queens, int pos)
	{
		for (int i = 0; i < pos; i++)
		{
			if (queens[i] == pos)
				return false;
			else if(abs(queens[i] - queens[pos]) == abs(i - pos))
			{
				return false;
			}
		}
		return true;
	}
	void dfs(vector<vector<string>>&res, vector<int> queens, int pos)
	{
		if (pos == queens.size())
		{

			return;
		}
		for (int i = 0; i < queens.size(); i++)
		{
			queens[pos] = i;
			if (isvalid(queens, pos))
			{
				dfs(res, queens, pos + 1);
			}
		}
	}
	vector<vector<string>> solveNQueens(int n) {
		vector<vector<string>> res;
		assert(n > 0);

	}
};


int main()
{
    return 0;
}

