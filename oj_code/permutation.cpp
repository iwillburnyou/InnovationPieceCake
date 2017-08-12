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
////int n;
////vector<int> num;
////void foo(vector<vector<int>> & r, int idx) {
////	if (idx == n) {
////		r.push_back(num);
////		return;
////	}
////	for (int i = idx; i<n; ++i) {
////		swap(num[i], num[idx]);
////		foo(r, idx + 1);
////		swap(num[i], num[idx]);
////	}
////}
////
////vector<vector<int>> permute(vector<int>& nums) {
////	n = nums.size();
////	num = nums;
////	vector<vector<int>> ret;
////	foo(ret, 0);
////	return ret;
////}
//void insert(int &key, stack<int> & st) {
//	if (st.empty()) {
//		st.push(key);
//		return;
//	}
//	int tmp = st.top();
//	st.pop();
//	insert(key, st);
//	st.push(tmp);
//}
//void rev(stack<int> & st) {
//	if (st.empty())
//		return;
//	int t = st.top();
//	st.pop();
//	rev(st);
//	insert(t, st);
//}
//int main() {
//
//	stack<int> s ({ 1,2,3,4,5 });
//	rev(s);
//	
//
//	return 0;
//	//vector<vector<int>> ret = permute(vector<int>({ 1,2,3 }));
//	//for (auto it : ret) {
//	//	for (auto itt : it)
//	//		cout << itt << ' ';
//	//	cout << endl;
//	//}
//	//return 0;
//}
//
