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
//using namespace std;
//#define PrintEx(EX) cout<<#EX<<" :\n"<<EX<<endl
//
//template<typename T>
//void hash_intersection(const vector<T>&a,const vector<T> &b,vector<T> & out)
//{
//	out.clear();
//	unordered_set<T> set(a.begin(),a.end());
//	for (auto  it = b.begin(); it != b.end();++it) {
//		if (set.find(*it) != set.end())
//			out.emplace_back(*it);
//	}
//	for (auto it : out)
//		cout << it << "  ";
//	cout << endl;
//}
////int main() {
////
////	vector<int> a = { 2,3,4 }, b = { 1,3,4 }, c;
////
////	hash_intersection(a, b, c);
////	return 0;
////}
//
//void partition(vector<int> & a) {
//
//	if (a.empty())
//		return;
//	cout << "before partition:\n";
//	for (auto it : a)
//		cout << it << " ";
//	cout << endl;
//
//	int pivot = a.back();
//	int j = -1;
//	for (vector<int>::size_type i = 0; i < a.size() - 1; i++) {
//		if (a[i] < pivot)
//			swap(a[i], a[++j]);
//	}
//	swap(a[++j], a[a.size() -1]);
//	cout << "after partition:\n";
//	for (auto it : a)
//		cout << it << " ";
//	cout << endl;
//
//}
//int n, tmp, mentor;
//int main() {
//
//
//	// First create an instance of an engine.
//	random_device rnd_device;
//	// Specify the engine and distribution.
//	mt19937 mersenne_engine(rnd_device());
//	uniform_int_distribution<int> dist(1, 52);
//
//	auto gen = std::bind(dist, mersenne_engine);
//	vector<int> vec(10);
//	generate(begin(vec), end(vec), gen);
//
//	
//
//	partition(vec);
//}