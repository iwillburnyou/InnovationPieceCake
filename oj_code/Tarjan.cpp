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
//
//class node {
//public:
//	node(int id_):id(id_) ,dfn(-1),low(-1),visited(false)
//	{
//
//	}
//	bool visited;
//	int id;
//	set<int> next;
//	int dfn, low;
//};
//
//stack<int> s;
//vector<bool> in;
//vector<vector<int>> res;
//void tarjan(vector<node> & a, int idx,int & cnt) {
//
//	int tmp_idx;
//	
//	a[idx].dfn = a[idx].low = ++cnt;
//	s.push(idx);
//	in[idx] = true;
//	for (auto it : a[idx].next) {
//		if (!a[it].visited) {
//			a[it].visited = true;
//			tarjan(a, it, ++cnt);
//			a[idx].low = min(a[idx].low, a[it].low);
//		}
//		else
//		{
//			a[idx].low = min(a[idx].low, a[it].dfn);
//		}
//	}
//	if (a[idx].low == a[idx].dfn) {
//		vector<int> tmp_vec;
//		do
//		{
//			tmp_idx = s.top();
//			tmp_vec.push_back(tmp_idx);
//			in[tmp_idx] = false;
//			s.pop();
//		} while (tmp_idx != idx);
//		res.push_back(tmp_vec);
//	}
//}
//int main() {
//	vector<node> arr(7, node(1));
//	in.resize(7, false);
//	for (size_t i = 0; i < arr.size(); i++) {
//		arr[i].id = i ;
//	}
//	arr[1].next.insert({ 2,3 });
//	arr[2].next.insert(4);
//	arr[3].next.insert({ 4,5 });
//	arr[4].next.insert({6,1});
//	arr[5].next.insert(6);
//	int cnt = 0;
//	tarjan(arr, 1,cnt);
//	return 0;
//}