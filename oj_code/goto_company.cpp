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
//using pt = pair<int, int>;
//vector<pt> taxi_pts;
//pt office_pt;
//const pt origin = make_pair(0, 0);
//int walk_time, taxi_time;
//
//int operator-(const pt & pt1, const pt & pt2) {
//	return abs(pt1.first - pt2.first) + abs(pt1.second - pt2.second);
//}
//int main() {
//	int tp;
//	cin >> tp;
//	taxi_pts.resize(tp);
//	for (int i = 0; i < tp; i++) {
//		cin >> taxi_pts[i].first;
//	}
//	for (int i = 0; i < tp; i++) {
//		cin >> taxi_pts[i].second;
//	}
//	cin >> office_pt.first >> office_pt.second;
//	cin >> walk_time >> taxi_time;
//	int ret = (office_pt - origin)*walk_time,tmp;
//	for (int i = 0; i < tp; i++) {
//		tmp = (taxi_pts[i] - origin)*walk_time;
//		if (tmp > ret)
//			continue;
//		else
//		{
//			ret = min(ret, taxi_time*(taxi_pts[i] - office_pt) + tmp);
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}