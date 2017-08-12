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
//const int MOD = 1000000007;
//int InversePairs(vector<int> data) {
//	int ret = 0;
//	set<int, greater<int>> s;
//	if (!data.empty())
//		s.insert(data.front());
//	for (size_t i = 1; i < data.size(); i++) {
//		auto res = s.lower_bound(data[i]);
//		ret += std::distance(s.begin(), res);
//		s.insert(data[i]);
//	}
//	return ret;
//
//}
//
//long long mergeSort(vector<int> &data, int s, int e) {
//	if (s >= e)
//		return 0;
//	long long ret = 0;
//	int mid = (s + e) / 2;
//	ret += mergeSort(data, s, mid) + mergeSort(data, mid + 1, e);
//	vector<int> tmp;
//	int cnt = 0,i=s,j=mid+1;
//	while (i<=mid &&  j<=e) {
//		
//		if (data[i] < data[j]) {
//			tmp.push_back(data[i++]);
//		}
//		else {
//			tmp.push_back(data[j++]);
//			ret += (mid - i + 1);
//			ret %= MOD;
//		}
//	}
//	if (i <= mid)
//		tmp.insert(tmp.end(), data.begin() + i , data.begin() + mid+1);
//	else
//		tmp.insert(tmp.end(), data.begin() + j, data.begin() + e+1);
//
//	for (int i = s; i <= e; i++) {
//		data[i] = tmp[i - s];
//	}
//	return ret;
//}
//
//int InversePairs1(vector<int> data) {
//	int ret = mergeSort(data, 0, data.size() - 1);
//	return ret;
//}
//
//
//int main() {
//	cout << InversePairs1(vector<int>({ 364,637,341,406,747,995,234,971,571,219,993,407,416,366,315,301,601,650,418,355,460,505,360,965,516,648,727,667,465,849,455,181,486,
//		149,588,233,144,174,557,67,746,550,474,162,268,142,463,221,882,576,604,739,288,569,256,936,275,401,497,82,935,983,583,523,697,478,147,795,380,973,958,115,773,870,259,
//		655,446,863,735,784,3,671,433,630,425,930,64,266,235,187,284,665,874,80,45,848,38,811,267,575 })) << endl;
//	return 0;
//}
//
