// 019.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	ListNode * removeNthFromEnd(ListNode* head, int n) {
		ListNode* dummy = new ListNode(0);
		ListNode* slow = dummy;
		ListNode* fast = dummy;
		dummy->next = head;
		for (int i = 0; i <= n; i++)
		{
			fast = fast->next;
		}
		while (fast)
		{
			fast = fast->next;
			slow = slow->next;
		}
		slow->next = slow->next->next;
		return dummy->next;
	}
};

int main()
{
    return 0;
}

