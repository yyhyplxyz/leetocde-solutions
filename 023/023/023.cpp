// 023.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;


class Solution {
public:
	ListNode * mergeKLists(vector<ListNode*>& lists) {
		if (lists.size() == 0)
			return 0;
		return sort(lists, 0, lists.size() - 1);

	}
	ListNode* sort(vector<ListNode*>& lists, int low, int high)
	{
		if (low >= high)
			return lists[low];
		int mid = low + (high - low) / 2;
		ListNode* l1 = sort(lists, low, mid);
		ListNode* l2 = sort(lists, mid + 1, high);
		return merge(l1, l2);
	}
	ListNode* merge(ListNode* l1, ListNode* l2)
	{
		if (l1 == nullptr)
			return l2;
		if (l2 == nullptr)
			return l1;
		if (l1->val < l2->val)
		{
			l1->next = merge(l1->next, l2);
			return l1;
		}
		else
		{
			l2->next = merge(l1, l2->next);
			return l2;
		}
	}
};


int main()
{
    return 0;
}

