1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    bool isSameTree(TreeNode* p, TreeNode* q) {
15       
16        if (p == nullptr && q == nullptr)
17            return true;
18
19        if (p == nullptr || q == nullptr)
20            return false;
21
22        if (p->val != q->val)
23            return false;
24
25        return isSameTree(p->left, q->left) &&
26               isSameTree(p->right, q->right);
27    }
28};
29