// 230.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	int count;
	int res;
	int kthSmallest(TreeNode* root, int k) {
		count = k;
		helper(root);
		return res;
	}

	void helper(TreeNode* root)
	{
		if (root)
		{
			helper(root->left);
			count--;
			if (count == 0)
				res = root->val;
			helper(root->right);
		}

	}
};

int main()
{
    return 0;
}

