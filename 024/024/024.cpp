// 024.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	ListNode * swapPairs(ListNode* head) {
		if (head == nullptr)
			return head;
		ListNode* dummy = new ListNode(0);
		dummy->next = head;
		ListNode* cur = dummy;
		while (cur && cur->next &&cur->next->next)
		{
			ListNode* first = cur->next;
			ListNode* third = cur->next->next->next;
			cur->next = cur->next->next;
			cur->next->next = first;
			cur = first;
			cur->next = third;

		}
		return dummy->next;
	}
};

int main()
{
	ListNode a(1);
	a.next = &ListNode(2);
	Solution b;
	b.swapPairs(&a);
    return 0;
}

