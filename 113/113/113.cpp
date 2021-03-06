// 113.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
using namespace std;

class Solution {
public:
	void helper(vector<vector<int>>& res, vector<int> tmp, TreeNode* root, int sum)
	{
		if (root == nullptr)
			return;
		tmp.push_back(root->val);
		if (root->left == nullptr && root->right == nullptr)
		{
			if (sum == root->val)
				res.push_back(tmp);
		}
		helper(res, tmp, root->right, sum - root->val);
		helper(res, tmp, root->left, sum - root->val);
		tmp.pop_back();

	}
	vector<vector<int>> pathSum(TreeNode* root, int sum) {
		vector<vector<int>> res;
		if (root == nullptr)
			return res;
		helper(res, vector<int> {}, root, sum);
		return res;
	}
};


int main()
{
    return 0;
}

