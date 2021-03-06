// 098.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	bool helper(TreeNode* root, TreeNode* max, TreeNode*  min)
	{
		if (root == nullptr)
			return true;
		if (min && root->val <= min->val || max && root->val >= max->val)
			return false;
		return helper(root->left, root, min) && helper(root->right, max, root);
	}
	bool isValidBST(TreeNode* root) {
		return helper(root, nullptr, nullptr);

	}
};




int main()
{
    return 0;
}

