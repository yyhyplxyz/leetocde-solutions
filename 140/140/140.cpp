// 140.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	map<int, vector<string>> mymap;
	vector<string> dfs(string s, vector<string>& worddict, int start)
	{
		if (mymap.find(start) != mymap.end())
		{
			return mymap[start];;
		}
		vector<string> res;
		if (start == s.size())
		{
			res.push_back("");
		}
		else
		{
			for (int end = start + 1; end <= s.size(); end++)
			{
				if (find(worddict.begin(), worddict.end(), s.substr(start, end - start)) != worddict.end())
				{
					vector<string> tmp = dfs(s, worddict, end);
					for (string t : tmp)
					{
						res.push_back(s.substr(start, end - start) + (t == "" ? "" : " ") + t);
					}
				}
			}
		}
		mymap.insert(make_pair(start,res));
		return res;

	}
	vector<string> wordBreak(string s, vector<string>& wordDict) {
		return dfs(s, wordDict, 0);
	}
};


int main()
{
    return 0;
}

