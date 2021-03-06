// 112.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;


class Solution {
public:
	bool hasPathSum(TreeNode* root, int sum) {
		if (root == nullptr)
			return false;
		if (root->left == nullptr &&root->right == nullptr)
			return sum == root->val;
		return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);

	}
};
int main()
{
    return 0;
}

