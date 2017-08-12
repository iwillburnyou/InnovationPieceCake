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
//using coord = pair<double, double>;
//coord operator-(const coord & a, const coord & b) {
//	coord ret;
//	ret.first = a.first - b.first;
//	ret.second = a.second - b.second;
//	return ret;
//}
//double cross(const coord& a, const coord & b) {
//	return a.first*b.second - a.second *b.first;
//}
//class Castle
//{
//	vector<coord> castles;
//	int n;
//public:
//	int test() {
//		int ret = 0;
//		if (n < 4)
//			return ret;
//		vector<bool> is_hull(castles.size(),false);
//		int n1, n2,tmp;
//		for (int i = 0; i < n-1; ++i) {
//			for (int j = i + 1; j < n; ++j) {
//				if (is_hull[i] && is_hull[j]) continue;
//				tmp = 2;
//				n1 = n2 = 0;
//				coord v1 = castles[j] - castles[i],v2;
//				for (int k = 0; k < n; ++k) {
//					if (k == i || k == j) continue;
//					v2 = castles[k] - castles[i];
//					if (cross(v1, v2) > 0)
//						++n1;
//					else
//						++n2;
//				}
//				if (n1 == 0 || n2 == 0)
//				{
//					is_hull[i] = true;
//					is_hull[j] = true;
//					continue;
//				}
//				tmp += max(n1, n2);
//				ret = max(ret, tmp);
//			}
//		}
//		return ret;
//	}
//	void init() {
//		cin >> n;
//		castles.resize(n);
//		for (int i = 0; i < n; ++i)
//			cin >> castles[i].first >> castles[i].second;
//		
//	}
//	void run() {
//		while (true)
//		{
//			init();
//			cout << test() << endl;
//		}
//	
//	}
//};
//
//class RNA {
//	vector<vector<int>> arr;
//	int n;
//public:
//	bool belong(int i, int j) {
//		if (arr[i][0] > arr[j][1] && arr[i][3] < arr[j][2])
//			return true;
//		else return false;
//	}
//	void init() {
//		cin >> n;
//		arr.resize(n,vector<int>(4));
//		for (int i = 0; i < n; ++i)
//			cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3];
//	}
//	int solve() {
//		if (arr.empty())
//			return 0;
//		int ret = 1,tmp;
//		for (int i = 0; i < n; ++i) {
//			tmp = 1;
//			for (int j = 0; j < n; ++j) {
//				if (belong(i, j))
//					++tmp;
//			}
//			ret = max(tmp, ret);
//		}
//		return ret;
//	}
//	void run() {
//		while (true) {
//			init();
//			cout<<solve()<<endl;
//		}
//	}
//};
////template <int n>
////struct f {
////	int value = n*f<n - 1>().value ;
////};
////template<>
////struct f<0> {
////	//enum { value = 1 };
////	int value = 1;
////};
////class A {
////	static const int a = 5;
////	int arr[a];
////};
//int main() {
//	/*Castle c;
//	c.run();*/
//	//RNA r;
//	//r.run();
//	//cout << f<6>().value << endl;
//	int a = (-10);
//	cout << (a&(-a)) << endl;
//	cout << ( (a&a-1)) << endl;
//
//}
////int main() {
////
////
////
////	random_device rd;  //Will be used to obtain a seed for the random number engine
////	mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
////	double mu1 = 0, mu2 = 0, sig1 = 1, sig2 = 1;
////	normal_distribution<> dis1(mu1, sig1);
////	normal_distribution<> dis2(mu2, sig2);
////	
////	int num_sim = 1e6;
////	int cnt = 0;
////	double x, y,res;
////	for(int i = 0 ; i<num_sim;++i)
////	{
////		x = dis1(gen);
////		y = dis2(gen);
////		x *= x;
////		res = (x + y*y - 1);
////		res = res*res*res - x*y*y*y;
////		if (res < 0)
////			++cnt;
////	}
////	cout <<fixed<<setprecision(1)<< static_cast<double>(cnt) / num_sim << endl;
////	return 0;
////}
