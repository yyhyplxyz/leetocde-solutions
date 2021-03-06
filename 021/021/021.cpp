// 021.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"

using namespace std;
class Solution {
public:
	ListNode * mergeTwoLists(ListNode* l1, ListNode* l2) {
		if (l1 == nullptr &&l2 == nullptr)
			return nullptr;

		ListNode* dummy = new ListNode(0);
		ListNode* cur = dummy;
		//dummy->next = l1;
		while (l1 &&l2)
		{
			if (l1->val < l2->val)
			{
				dummy->next = l1;
				l1 = l1->next;
			}
			else
			{
				dummy->next = l2;
				l2 = l2->next;
			}
			dummy = dummy->next;
		}
		if (l1)
		{
			dummy->next = l1;
		}
		else
		{
			dummy->next = l2;
		}
		return cur->next;
	}
};
int main()
{
    return 0;
}

