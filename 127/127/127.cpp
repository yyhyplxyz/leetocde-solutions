// 127.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		set<string> myset(wordList.begin(), wordList.end());
		auto finding = myset.find(beginWord);
		if (finding != myset.end())
		{
			myset.erase(finding);
		}
		queue < string > myqueue;
		int level = 1;
		int curnum = 1;
		int nextnum = 0;
		myqueue.push(beginWord);
		while (!myqueue.empty())
		{
			string word = myqueue.front();
			myqueue.pop();
			curnum--;
			for (int i = 0; i < word.length(); i++)
			{
				
				for (char t = 'a'; t <= 'z'; t++)
				{
					string tmp = word;
					tmp[i] = t;
					auto tem = myset.find(tmp);
					if (tem != myset.end())
					{
						if (tmp == endWord)
							return level + 1;
						nextnum++;
						myqueue.push(tmp);
						myset.erase(tem);
					}
				}
			}
			if (curnum == 0)
			{
				curnum = nextnum;
				nextnum = 0;
				level++;
			}

		}
		return 0;
	}
};


int main()
{
    return 0;
}

