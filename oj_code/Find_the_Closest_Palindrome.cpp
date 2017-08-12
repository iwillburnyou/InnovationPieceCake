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
//using namespace std;
//#define PrintEx(EX) cout<<#EX<<" :\n"<<EX<<endl
//
//long long  generate_palindromic(string & s,bool is_odd) {
//	long long ret;
//	string tmp = s;
//	reverse(tmp.begin(), tmp.end());
//	if (is_odd) {
//		tmp = s + tmp.substr(1, tmp.length() - 1);
//	}
//	else
//	{
//		tmp = s + tmp;
//	}
//	ret = stoll(tmp);
//	return ret;
//}
//string nearestPalindromic(string n) {
//	if (n.empty())
//		return n;
//	vector<long long> candidates;
//	string left,tmp;
//	long long value_left;
//	bool isOdd = n.length() & 1;
//	if (n.length() & 1) {
//		left = n.substr(0, n.length() / 2 + 1);
//		candidates.push_back(generate_palindromic(left, isOdd));
//
//		left = to_string(stoll(left) - 1);
//		candidates.push_back(generate_palindromic(left, isOdd));
//
//		left = to_string(stoll(left) + 2);
//		candidates.push_back(generate_palindromic(left, isOdd));
//	}
//	else {
//		left = n.substr(0, n.length() / 2);
//		candidates.push_back(generate_palindromic(left, isOdd));
//
//		left = to_string(stoll(left) - 1);
//		candidates.push_back(generate_palindromic(left, isOdd));
//
//		left = to_string(stoll(left) + 2);
//		candidates.push_back(generate_palindromic(left, isOdd));
//	}
//	if (n.length() > 1) {
//		candidates.push_back(stoll(string(n.length() -1 , '9')));
//	}
//	tmp = "1";
//	tmp += string(n.length() - 1, '0');
//	tmp += "1";
//	candidates.push_back(stoll(tmp));
//	long long base = stoll(n);
//	auto cmp = [base](long long & a, long long &b) {
//		if (abs(a - base) == abs(b - base))
//			return a < b;
//		return abs(a - base) < abs(b - base);
//	};
//	sort(candidates.begin(), candidates.end(), cmp);
//	return candidates.front() - base == 0 ? (to_string(candidates[1])) : (to_string(candidates[0]));
//}
//int main() {
//	string s;
//	while (cin >> s) {
//		cout << nearestPalindromic(s) << endl;
//	}
//
//	return 0;
//}