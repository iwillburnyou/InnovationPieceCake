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
//class nth_arrays {
//	vector<vector<int>> arrs;
//	int nth;//return element index in all sorted arrays
//	int get_mids(int s, int b,int end_idx) {
//		int temp = b + s;
//		if (temp < 0) temp = 0;
//		else if (temp >= end_idx) temp = end_idx - 1;
//		return temp;
//	}
//	bool valid_index(int arr_idx, int base_idx) {
//		return base_idx > -1 && base_idx < arrs[arr_idx].size();
//	}
//	int solve() {
//		if(arrs.empty())
//			return 0;
//		vector<int> base, mids;
//		int total_len = 0;
//		for (auto & it : arrs) total_len += it.size();
//		bool go_from_right = false;
//		if (nth > total_len / 2) {
//			go_from_right = true;
//			//target_th = total_len - nth  -1;
//			for (auto it = 0; it < arrs.size(); ++it) base[it] = arrs[it].size() - 1;
//		}
//		else
//		{
//			base.resize(arrs.size(), 0);
//		}
//		mids.resize(arrs.size());
//		int remain_ele = go_from_right ? -nth - 1 : nth + 1,min_index,min_value,tmp_value , last_index = -1;
//
//		int step = remain_ele / arrs.size();
//		for (auto i = 0; i < arrs.size(); ++i) {
//			mids[i] = get_mids(step, base[i], arrs[i].size());
//		}
//		while ( abs(step) > 0)
//		{
//			if (last_index != -1) {
//				mids[last_index] = get_mids(step, base[last_index],arrs[last_index].size());
//			}
//			min_index = 0;
//			min_value = arrs[0][mids[0]] ;
//			for (auto i = 1; i < arrs.size(); ++i) {
//				tmp_value =  arrs[i][mids[i]];
//				if (tmp_value < min_value) {
//					min_value = tmp_value;
//					min_index = i;
//				}
//			}
//			remain_ele -= abs(base[min_index] - mids[min_index]);
//			step = remain_ele / arrs.size();
//			if (step == 0)break;
//			base[min_index] = mids[min_index];
//			base[min_index] += go_from_right ? -1 : 1;
//
//		}
//		min_value = arrs[0][base[0]];
//		for (auto i = 1; i < arrs.size(); ++i) {
//			tmp_value = arrs[i][base[i]];
//			if (tmp_value < min_value) {
//				min_value = tmp_value;
//			}
//		}
//		return min_value;
//		
//	}
//
//	int solve_two_arrays() {
//		if (arrs.empty())
//			return 0;
//		int num_to_remove = nth;
//		bool go_right = false;
//		int total_len = arrs[0].size() + arrs[1].size();
//		vector<int> base(2, -1);
//		if (!arrs[0].empty()) base[0] = 0;
//		if (!arrs[1].empty()) base[1] = 0;
//		//if (num_to_remove >= total_len/2) {
//		//	go_right = true;
//		//	base[0] = arrs[0].size() - 1;
//		//	base[1] = arrs[1].size() - 1;
//		//}
//		int step = (num_to_remove+1) / 2,min_idx = -1,actu_step;
//		bool valid_arrs = true;
//		vector<int> mid(base);
//		while (num_to_remove && valid_index(0,base[0]) && valid_index(1,base[1]))
//		{
//			mid[0] = get_mids(step - 1, base[0], arrs[0].size());
//			mid[1] = get_mids(step - 1, base[1], arrs[1].size());
//
//			
//			min_idx = arrs[0][mid[0]] < arrs[1][mid[1]] ? 0 : 1;
//			actu_step = abs(base[min_idx] - mid[min_idx]) + 1;
//			num_to_remove -= actu_step;
//
//			base[min_idx] += actu_step;
//			step = (num_to_remove + 1)/ 2;
//		}
//		if (!valid_index(0, base[0])) {
//			return arrs[1][base[1] + num_to_remove];
//		}
//		if (!valid_index(1, base[1])) {
//			return arrs[0][base[0] + num_to_remove];
//		}
//		return min(arrs[0][base[0]], arrs[1][base[1]]);
//		
//	}
//	void foo(int x) {
//		if (x & 1) {
//			nth = x / 2;
//			cout<<solve_two_arrays() << endl;
//		}
//		else
//		{
//			nth = x / 2;
//			cout << solve_two_arrays() << endl;
//			nth = x / 2 - 1;
//			cout << solve_two_arrays() << endl;
//		}
//	}
//	int solvex(int n) {
//		nth = n;
//		return solve_two_arrays();
//	}
//	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//		arrs.resize(2);
//		arrs[0] = nums1;
//		arrs[1] = nums2;
//		int total_len = nums1.size() + nums2.size();
//		if (total_len & 1) return solvex((nums1.size() + nums2.size()) / 2);
//		else return static_cast<double>(solvex((nums1.size() + nums2.size()) / 2) + solvex((nums1.size() + nums2.size()) / 2 - 1)) / 2.0;
//	}
//	void test() {
//
//		
//		cout << findMedianSortedArrays(vector<int>({ 1,2,3 }), vector<int>({ 1,2,2 })) << endl;
//		return;
//		arrs.resize(2);
//		arrs[0] = { 1,2 };
//		arrs[1] = { 3,4 };
//		nth = 1;
//		cout << solve_two_arrays() << endl;
//
//		
//		arrs[0] = { 2,4,6,8,10};
//		arrs[1] = { 3,5,7 };
//		nth = 3;
//		cout << solve_two_arrays() << endl;
//	}
//public:
//	void run() {
//		test();
//	}
//};
//int main() {
//	string a("main");
//	int b = a.find('2',5);
//	return 0;
//	//nth_arrays n;
//	//n.run();
//	//return 0;
//}
