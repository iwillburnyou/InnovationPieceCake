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
//using tt = vector<int>::size_type;
//class three_sum {
//	vector<int> nums;
//	int target;
//public:
//	int solve_small() {
//		if (nums.size() < 3)
//			return 0;
//		vector<int> sorted = nums;
//		sort(sorted.begin(), sorted.end());
//		int ret = 0;
//		int left, right, tmp;
//		for (int i = 0; i < sorted.size() - 2; ++i) {
//			if (3 * sorted[i]>= target)
//				break;
//			left = i + 1;
//			right = sorted.size() - 1;
//			while (left<right)
//			{
//
//				tmp = sorted[left] + sorted[right] + sorted[i];
//				if (tmp < target) {
//					++ret;
//					while (left < right && sorted[right] == sorted[right - 1])
//					{
//						--right;
//					}
//					--right;
//				}
//				else
//				{
//					//while (left < right  && sorted[left] == sorted[left + 1])
//					//{
//					//	++left;
//					//}
//					//++left;
//					while (left < right && sorted[right] == sorted[right - 1])
//					{
//						--right;
//					}
//					--right;
//				}
//				
//			/*	if (tmp <= target) {
//					while (left < right  && sorted[left] == sorted[left + 1])
//					{
//						++left;
//					}
//					++left;
//				}
//				if (tmp >= target) {
//					while (left < right && sorted[right] == sorted[right - 1])
//					{
//						--right;
//					}
//					--right;
//				}*/
//
//			}
//			while (i + 1<sorted.size() && sorted[i] == sorted[i + 1])
//			{
//				++i;
//			}
//		}
//		return ret ;
//	}
//	int solve_closest() {
//		if (nums.size() < 3)
//			return 0;
//		vector<int> sorted = nums;
//		sort(sorted.begin(), sorted.end());
//		int ret = (sorted[0] + sorted[1] + sorted[2] - target);
//		int left, right, tmp;
//		for (int i = 0; i < sorted.size() - 2; ++i) {
//			if (3 * sorted[i] - target > abs(ret))
//				break;
//			left = i + 1;
//			right = sorted.size() - 1;
//			while (left<right)
//			{
//
//				tmp = sorted[left] + sorted[right] + sorted[i];
//				if (tmp == target) {
//					return target;
//				}
//				if (abs(ret) > abs( tmp - target))
//					ret = (tmp - target);
//
//				if (tmp < target) {
//					while (left < right  && sorted[left] == sorted[left + 1])
//					{
//						++left;
//					}
//					++left;
//				}
//				if (tmp > target) {
//					while (left < right && sorted[right] == sorted[right - 1])
//					{
//						--right;
//					}
//					--right;
//				}
//
//			}
//			while (i + 1<sorted.size() && sorted[i] == sorted[i + 1])
//			{
//				++i;
//			}
//		}
//		return ret + target;
//	}
//	vector<vector<int>> solve2() {
//		vector<vector<int>> ret;
//		if (nums.size() < 3)
//			return ret;
//		vector<int> sorted = nums;
//		int tmp;
//		sort(sorted.begin(), sorted.end());
//		int left, right, target;
//		for (tt i = 0; i < sorted.size() - 2; ++i) {
//			if (sorted[i] > 0)
//				continue;
//			left = i + 1;
//			right = sorted.size() - 1;
//			target = -sorted[i];
//			while (left<right)
//			{
//
//				tmp = sorted[left] + sorted[right];
//				if (tmp == target) {
//					ret.emplace_back(vector<int>({ sorted[i],sorted[left],sorted[right] }));
//				}
//				if (tmp <= target) {
//					while (left < right  && sorted[left] == sorted[left + 1])
//					{
//						++left;
//					}
//					++left;
//				}
//				if (tmp >= target) {
//					while (left < right && sorted[right] == sorted[right - 1])
//					{
//						--right;
//					}
//					--right;
//				}
//
//			}
//			while (i + 1<sorted.size() && sorted[i] == sorted[i + 1])
//			{
//				++i;
//			}
//		}
//		return ret;
//	}
//	vector<vector<int>> solve1() {
//		vector<vector<int>> ret;
//		if (nums.size() < 3)
//			return ret;
//		vector<int> sorted = nums;
//		int tmp;
//		sort(sorted.begin(), sorted.end());
//		int left, right,target;
//		for (tt i = 0; i < sorted.size() - 2; ++i) {
//			if (sorted[i] > 0)
//				continue;
//			left = i + 1;
//			right = sorted.size() - 1;
//			target = -sorted[i];
//			while (left<right)
//			{
//			
//				tmp = sorted[left] + sorted[right];
//				if (tmp == target) {
//					ret.emplace_back(vector<int>({ sorted[i],sorted[left],sorted[right] }));
//				}
//				if (tmp <= target) {
//					while (left < right  && sorted[left] == sorted[left + 1])
//					{
//						++left;
//					}
//					++left;
//				}
//				if (tmp >= target) {
//					while (left < right && sorted[right] == sorted[right - 1])
//					{
//						--right;
//					}
//					--right;
//				}
//
//			}
//			while (i+1<sorted.size() && sorted[i] == sorted[i+1])
//			{
//				++i;
//			}
//		}
//		return ret;
//	}
//	vector<vector<int>> solve() {
//		vector<vector<int>> ret;
//		if (nums.size() < 3)
//			return ret;
//		vector<int> sorted = nums;
//		vector<int> tmp_vec(3);
//		int tmp;
//		sort(sorted.begin(), sorted.end());
//	
//		for (tt i = 0; i < sorted.size() - 2; ++i) {
//			for (tt j = i + 1; j < sorted.size() - 1; ++j) {
//				tmp = -(sorted[i] + sorted[j]);
//				if (tmp < sorted[j])
//					break;
//				else if (tmp > sorted.back())
//					continue;
//				else {
//					if (binary_search(sorted.begin() + j + 1, sorted.end(), tmp))
//					{
//						tmp_vec[0] = sorted[i];
//						tmp_vec[1] = sorted[j];
//						tmp_vec[2] = tmp;
//
//						if (!ret.empty()) {
//							if (!binary_search(ret.begin(), ret.end(), tmp_vec, [](const vector<int> & a, const vector<int> &b) {
//								if (a.size() != b.size() || a.size() != 3)
//									return false;
//								else {
//									if (a[0] != b[0])
//										return a[0] < b[0];
//									else if (a[1] != b[1])
//										return a[1] < b[1];
//									else
//									{
//										return a[2] < b[2];
//									}
//								}
//							}))
//								ret.emplace_back(tmp_vec);
//						}
//						else ret.emplace_back(vector<int>({ sorted[i],sorted[j],tmp }));
//					}
//						
//				}
//			}
//		}
//		return ret;
//	}
//	void test(vector<int> & v){
//		nums = v;
//		vector<vector<int>> ret;
//		ret = solve1();
//		for (auto &it : ret) {
//			for (auto &itt : it)
//				cout << itt << ' ';
//			cout << endl;
//		}
//		cout << "-------------------------\n";
//	}
//	void test1(vector<int> & v, int t) {
//		target = t;
//		nums = v;
//		vector<vector<int>> ret = solve2();
//		for (auto &it : ret) {
//			for (auto &itt : it)
//				cout << itt << ' ';
//			cout << endl;
//		}
//		cout << "-------------------------\n";
//
//	}
//	void run() {
//		test1(vector<int>({ 1, 0, -1, 0, -2, 2 }), 0);
//		/*test1(vector<int>({ -1 ,2 ,1 ,- 4 }),1);
//		test1(vector<int>({ 0,0,0,0,0 }), 1);
//		test1(vector<int>({ -10,-2,1,0,0 }), 1);*/
//
//	/*	test(vector<int>({ 0,0,0,0,0,0 }));
//		test(vector<int>({-2,0,1,1,2}));
//		test(vector<int>({ -1, 0, 1, 2, -1, -4 }));
//		test(vector<int>({ -4,-2,-2,-2,0,1,2,2,2,3,3,4,4,6,6 }));*/
//
//	}
//};
//int main() {
//	three_sum s;
//	s.run();
//	return 0;
//}