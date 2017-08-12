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
//class Point {
//public:
//	int x, y;
//	Point() : x(0), y(0) {}
//	Point(int a, int b) : x(a), y(b) {}
//};
//string get_slope(Point & a, Point &b) {
//	string ret;
//	if (a.x == b.x && a.y == b.y) {
//		ret = "dup";
//	}
//	else if (a.x == b.x) {
//		ret = "inf";
//	}
//	else if (a.y == b.y) {
//		ret = to_string(0);
//	}
//	else {
//		ret = to_string(static_cast<double>(a.y - b.y) / (a.x - b.x));
//	}
//	return ret;
//}
//int gcd(int a, int b) {
//	if (b != 0)
//		return gcd(b, a%b);
//	else
//	{
//		return a;
//	}
//}
//int maxPoints(vector<Point>& points) {
//
//
//	string slope;
//	int ret = 0;
//	vector<unordered_map<string, int>> vec(points.size());
//	for (size_t i = 0; i< points.size(); i++) {
//		for (vector<Point>::size_type j = i + 1; j<points.size(); j++) {
//
//			slope = get_slope(points[i], points[j]);
//			if (slope == "dup") {
//				for (auto & it : vec[i]) {
//					vec[j][it.first] = it.second + 1;
//					ret = max(ret, vec[j][it.first]);
//				}
//			}
//			vec[j][slope] = vec[i][slope] + 1 + vec[i]["dup"];
//			ret = max(ret, vec[j][slope]);
//		}
//	}
//	if (points.size())
//		++ret;
//	return ret;
//}
//
//
//using coord = pair<int, double>;
//int main() {
//	unordered_set<coord> s;
//
//	cout<<gcd(-11,24) << endl;
//	return 0;
//}