// 257.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;


class Solution {
public:
	void helper(vector<string>& res, TreeNode* root, string path)
	{
		if (root->left == nullptr &&root->right == nullptr)
			res.push_back(path + to_string(root->val));
		if (root->left != nullptr)
		{
			helper(res, root->left, path + to_string(root->val) + "->");
		}
		 if (root->right != nullptr)
		{
			helper(res, root->right, path + to_string(root->val) + "->");
		}
	}
	vector<string> binaryTreePaths(TreeNode* root) {
		vector<string> res;
		if (root == nullptr)
			return res;
		helper(res, root, "");
		return res;
	}
};


int main()
{
    return 0;
}

