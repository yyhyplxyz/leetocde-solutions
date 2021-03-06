// 111.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	int minDepth(TreeNode* root) {
		if (root == nullptr)
			return 0;

		if (root->left == nullptr || root->right == nullptr)
		{
			return max(minDepth(root->left), minDepth(root->right)) + 1;
		}
		else
			return min(minDepth(root->left), minDepth(root->right)) + 1;
	}
};

int main()
{
    return 0;
}

