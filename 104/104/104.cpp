// 104.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;
class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (root == nullptr)
			return 0;
		return max(maxDepth(root->left), maxDepth(root->right)) + 1;
	}
};

int main()
{
    return 0;
}

