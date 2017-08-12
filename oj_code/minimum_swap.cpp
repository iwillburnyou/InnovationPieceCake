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
//class swap_any;
//using tt = vector<int>::size_type;
//class swap_neighbour {
//	
//	
//	
//	void solve(){
//		//min_num == ÄæÐòÊýºÍ
//		for (tt i = 0; i < arr.size(); i++) {
//			for (tt j = i + 1; j < arr.size(); ++j) {
//				if (arr[i] > arr[j])
//					++min_num;
//			}
//		}
//		cout << min_num << endl;
//	}
//protected:
//	vector<int> arr;
//	int min_num;
//	void init() {
//		arr = { 5 , 4,  3,  2,  -1 };
//		min_num = 0;
//	}
//public:
////	friend class swap_any;
//	void run(){
//		init();
//		solve();
//	}
//};
//
//class swap_any :public swap_neighbour {
//	void solve() {
//		int loop_cnt = 0;
//		min_num = arr.size();
//		vector<int> cop(arr);
//		sort(cop.begin(), cop.end());
//		unordered_map<int, int> m;
//		for (tt i = 0; i < arr.size(); ++i) {
//			m[arr[i]] = find(cop.begin(),cop.end(),arr[i]) - cop.begin();
//		}
//		vector<bool> vecb(arr.size(), false);
//		int tmp_int;
//		for (tt i = 0; i < arr.size(); ++i) {
//			if (vecb[i]) continue;
//			tmp_int = i;
//			//vecb[tmp_int] = true;
//			do
//			{
//				vecb[tmp_int] = true;
//				tmp_int = m[arr[tmp_int]];
//				
//			} while (tmp_int!=i);
//			++loop_cnt;
//		}
//		cout << min_num - loop_cnt << endl;
//	}
//public:
//	void run() {
//		init();
//		solve();
//	}
//};
//int main() {
//
//	//swap_neighbour p;
//	swap_any p;
//	p.run();
//	return 0;
//}