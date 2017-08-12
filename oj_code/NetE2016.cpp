//#include<iostream>
//#include<string>
//#include<vector>
//#include<map>
//#include<iomanip>
//#include<algorithm>
//#include<fstream>
//#include <queue>
//#include<map>
//#include<set>
//#include<unordered_set>
//#include<unordered_map>
//#include <random>
//#include <cmath>
//#include<utility>
//#include<limits>
//#include<functional>
//#include<stack>
//using namespace std;
//#define PrintEx(EX) cout<<#EX<<" :\n"<<EX<<endl
//int cmp1(int g1, int g2, vector<vector<int> > records, int n) {
//	int cur,maxn = 0;
//	for (auto & it : records) {
//		maxn = max(max(it[0], it[1]), maxn);
//	}
//	queue<int> q1,q2;
//	vector<bool> vised(maxn + 1, false);
//	q1.push(g1);
//	q2.push(g2);
//	vised[g2]= vised[g1] = true;
//	while (!q1.empty() || !q2.empty()) {
//		cur = q1.front();
//		q1.pop();
//		for (auto &it : records) {
//			if (it[0] == cur) {
//				if (it[1])
//					return 1;
//				else
//				{
//					q1.push(it[1]);
//					vised[it[1]] = true;
//				}
//			}
//		}
//
//		cur = q2.front();
//		q2.pop();
//		for (auto &it : records) {
//			if (it[1] == cur) {
//				if (it[0])
//					return 1;
//				else
//				{
//					q2.push(it[0]);
//					vised[it[0]] = true;
//				}
//			}
//		}
//	}
//	
//	/*
//	q.push(g2);
//	while (!q.empty()) {
//		cur = q.front();
//		q.pop();
//		if (cur == g1)
//			return -1;
//		for (auto &it : records) {
//			if (it[0] == cur)
//				q.push(it[1]);
//		}
//	}
//	*/
//	return 0;
//}
//
//int cmp(int g1, int g2, vector<vector<int> > records, int n) {
//	// write code here
//	int cur, maxn = 0;
//	for (auto & it : records) {
//		maxn = max(max(it[0], it[1]), maxn);
//	}
//	vector<vector<short>> m(maxn+1,vector<short>(maxn+1,0));
//	for (auto & it : records) {
//		m[it[0]][it[1]] = 1;
//		m[it[1]][it[0]] = -1;
//		for (int i = 0; i <= maxn; ++i) {
//			if (m[it[1]][i] == 1) {
//				m[it[0]][i] = 1;
//				m[i][it[0]] = -1;
//			}
//			if (m[i][it[0]] == 1) {
//				m[i][it[1]] = 1;
//				m[it[1]][i] = -1;
//			}
//
//		}
//	}
//	
//	return m[g1][g2];
//	/*queue<int> q1,q2;
//	vector<bool> vised(maxn+1, false);
//	q1.push(g1);
//	q2.push(g2);
//	vised[g2] = vised[g1] = true;
//	while (!q1.empty() || !q2.empty()) {
//		cur = q1.front();
//		q1.pop();
//		
//
//		cur = q2.front();
//		q2.pop();
//		for (auto &it : records) {
//			if (it[1] == cur) {
//				if (it[0])
//					return 1;
//				else
//				{
//					q2.push(it[0]);
//					vised[it[0]] = true;
//				}
//			}
//		}
//	}
//		
//	return 0;*/
//}
//
//
//void test() {
//	vector<vector<int>> vec(4);
//	vec[0] = { 1,2 };
//	vec[1] = { 2,4 };
//	vec[2] = { 1,3 };
//	vec[3] = { 4,3 };
//	cout << cmp(2, 3, vec, 4) << endl;
//}
//
//struct TreeNode {
//	int val;
//	struct TreeNode *left;
//	struct TreeNode *right;
//	TreeNode(int x , TreeNode * p1 = nullptr,TreeNode* p2 = nullptr) :
//		val(x), left(p1), right(p2) {
//	}
//};
//vector<TreeNode *> foo(TreeNode * p) {
//	vector<TreeNode *> pa1, pa2;
//	if (!p) return pa1;
//	pa1 = foo(p->left);
//	pa2 = foo(p->right);
//	pa1.emplace_back(p);
//	pa2.emplace_back(p);
//	if (!p->right && !p->left) {
//		return pa1;
//	}
//	else if (!p->right) {
//		p->val = p->left->val;
//		return pa1;
//	}
//	else if (!p->left) {
//		p->val = p->right->val;
//		return pa2;
//	}
//	else {
//		if (p->left->val > p->right->val) {
//			p->val = p->left->val;
//			return pa1;
//		}
//		else {
//			p->val = p->right->val;
//			return pa2;
//		}
//	}
//
//}
//vector<TreeNode *> foo1(TreeNode * p) {
//	vector<TreeNode *> pa1, pa2;
//	if (!p) return pa1;
//	pa1 = foo1(p->left);
//	pa2 = foo1(p->right);
//	pa1.emplace_back(p);
//	pa2.emplace_back(p);
//	if (!p->right && !p->left) {
//		return pa1;
//	}
//	else if (!p->right) {
//		p->val = p->left->val;
//		return pa1;
//	}
//	else if (!p->left) {
//		p->val = p->right->val;
//		return pa2;
//	}
//	else {
//		if (p->left->val < p->right->val) {
//			p->val = p->left->val;
//			return pa1;
//		}
//		else {
//			p->val = p->right->val;
//			return pa2;
//		}
//	}
//}
//
//int getDis(TreeNode* root) {
//	// write code here
//	if (!root)
//		return 0;
//	vector<TreeNode *> path, path_min;
//	path = foo(root);
//	path_min = foo1(root);
//	int cnt = 0, i = path.size() - 1, j = path_min.size() - 1;
//	while (path[i] == path_min[j]) {
//		++cnt;
//		--i;
//		--j;
//	}
//	return   path.size() + path_min.size() - 2 * cnt;
//
//}
//TreeNode * build_tree(vector<int>  & a) {
//
//	TreeNode *r= new TreeNode(a[0]),*tmp;
//	vector<TreeNode * > vec(a.size(), nullptr);
//	vec[0] = r;
//	int parent_idx;
//	for (int i = 1; i < a.size(); ++i) {
//		if (a[i] == -1) continue;
//		tmp = new TreeNode(a[i]);
//		vec[i] = tmp;
//		parent_idx = (i - 1) / 2;
//		if (i & 1) {
//			vec[parent_idx]->left = tmp;
//		}
//		else vec[parent_idx]->right = tmp;
//
//	}
//	return r;
//}
//void test2() {
//	TreeNode * r = build_tree(vector<int>({ 13,1,11,5,9,10,14,8,-1,6,-1,18,15,-1,3,16,4,-1,-1,7,17,-1,-1,2,12,-1 }));
//	
//	//TreeNode * p1 = new TreeNode(-1),*p2,*p3;
//	//p2 = new TreeNode(15, p1);
//	//p1 = new TreeNode(2);
//
//
//
//
//	cout<<getDis(r)<<endl;
//}
//int prvalue(int a) {
//	int ret = 2;
//	//cout << (&a) << endl;
//	//return 1;
//	return ret;
//}
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//	
//};
//ListNode* deleteDuplicates(ListNode* head) {
//	if (!head || !head->next) return head;
//	ListNode * it = head, *last_node = head, *last_valid_node = NULL;
//	bool dirty = false;
//	while (it->next) {
//		it = it->next;
//		if (last_node->val == it->val) {
//			dirty = true;
//			last_node->next = it->next;
//			delete it;
//			it = last_node;
//		}
//		else if (dirty) {
//			if (last_valid_node)
//				last_valid_node->next = it;
//
//			if (last_node == head)
//				head = last_node->next;
//			delete last_node;
//			dirty = false;
//		}
//		else {
//			last_valid_node = last_node;
//			dirty = false;
//		}
//
//
//		last_node = it;
//	}
//	if (dirty) {
//		if (last_valid_node)
//			last_valid_node->next = NULL;
//		if (last_node == head)
//			head = last_node->next;
//		delete last_node;
//	}
//	return  head;
//}
//class A
//{
//	char ch;
//};
//
//class B
//{
//	char ch;
//	virtual void func0() {  }
//};
//
//class C
//{
//	char ch1;
//	char ch2;
//	virtual void func() {  }
//	virtual void func1() {  }
//};
//
//class D : public A, public C
//{
//	int d;
//	virtual void func() {  }
//	virtual void func1() {  }
//};
//
//class E : public B, public C
//{
//	int e;
//	virtual void func0() {  }
//	virtual void func1() {  }
//};
//
//
//struct abc {
//	int a;
//};
//struct abcd :public abc {
//	int b;
//};
//int main(void)
//{
//	//cout << PrintMinNumber(vector<int>({3,32,321})) << endl;
//	return 0;
//}
//
