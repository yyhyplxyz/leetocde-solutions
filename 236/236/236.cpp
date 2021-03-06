// 236.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;


class Solution {
public:
	TreeNode * lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
		if (root == nullptr || root == p || root == q)
		{
			return root;
		}
		TreeNode* left = lowestCommonAncestor(root->left, p, q);
		TreeNode* right = lowestCommonAncestor(root->right, p, q);
		if (left != nullptr && right != nullptr)
			return root;
		return left == nullptr ? right : left;
	}
};

int main()
{
    return 0;
}

