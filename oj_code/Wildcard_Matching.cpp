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
//#include <regex>
//using namespace std;
//#define PrintEx(EX) cout<<#EX<<" :\n"<<EX<<endl
//
//bool isMatch(string s, string p) {
//	bool ret = false;
//	auto res = p.find('?');
//	while (res != string::npos)
//	{
//		p.replace(res, 1, "\\S{1}");
//		res += 5;
//		res = p.find('?', res);
//	}
//	res = p.find('*');
//	while (res != string::npos)
//	{
//		p.replace(res, 1, "\\S*");
//		res += 3;
//		res = p.find('*', res);
//	}
//	regex txt_regex(p);
//	
//	return regex_match(s, txt_regex);
//}
//
//bool isMatch_dp(string s, string p) {
//	int ns = s.length(), np = p.length();
//	vector < vector<bool>> dp(ns+1,vector<bool>(np+1,false));
//	dp[0][0] = true;
//	for (int j = 1; j <= np; ++j){
//		if (p[j-1] == '*' && dp[0][j - 1])
//			dp[0][j] = true;
//		else break;
//	}
//	for (int i = 1; i <= ns; ++i) {
//		for (int j = 1; j <= np; ++j) {
//			if (s[i-1] == p[j-1] || p[j-1] == '?') {
//				dp[i][j] = dp[i - 1][j - 1];
//			}
//			else if (p[j-1] == '*') {
//				for (int k = 0; k <= i; ++k) {
//					if (dp[k][j - 1]) {
//						dp[i][j] = true;
//						break;
//					}
//				}
//			}
//		}
//	}
//	return dp[ns][np];
//}
//
//bool isMatch_on(string s, string p) {
//	auto i = s.begin();
//	auto j = p.begin();
//	string::iterator star = p.end(), ss = s.begin();
//	while (i != s.end()) {
//		
//		if (j != p.end()) {
//			if (*i == *j || *j == '?') {
//				++i;
//				++j;
//				continue;
//			}
//			if (*j == '*') {
//				star = j++;
//				ss = i;
//				continue;
//			}
//		}
//	
//		if (star != p.end()) {
//			j = star + 1;
//			i = ++ss;
//			continue;
//		}
//		return false;
//	}
//	while (j!= p.end() && *j == '*') { ++j; }
//	return  j == p.end();
//}
//int main() {
//	//test fload add;
//	const int num = 10000000;
//	float sum = 0;
//	for (int i = 0; i < num; ++i) {
//		sum += 1.0f / static_cast<float>(i + 1);
//	}
//	cout <<fixed<<setprecision(20)<< sum << endl;
//
//	float sum1 = 0;
//	for (int i = num-1; i >-1; --i) {
//		sum1 += 1.0f / static_cast<float>(i + 1);
//	}
//	cout <<  sum1 << endl;
//	//Kahan summation algorithm
//	float sum2 = 0,c = 0,y,t;
//	for (int i = 0; i < num; ++i) {
//		y = 1.0f / static_cast<float>(i + 1) - c;
//		t = sum2 + y;
//		c = (t - sum2) - y;
//		sum2 = t;
//	}
//	cout <<   sum2 << endl;
//
//	float sum3 = 0;
//	c = 0;
//	for (int i = num -1; i>-1; --i) {
//		y = 1.0f / static_cast<float>(i + 1) - c;
//		t = sum3 + y;
//		c = (t - sum3) - y;
//		sum3 = t;
//	}
//	cout << sum3 << endl;
//
//
//	double sumd = 0;
//	for (int i = 0; i < num; ++i) {
//		sumd += 1.0 / static_cast<double>(i + 1);
//	}
//	cout <<setprecision(30)<<  sumd << endl;
//
//	long double sumld = 0;
//	for (int i = 0; i < num; ++i) {
//		sumld += 1.0 / static_cast< long double>(i + 1);
//	}
//	cout << sumld << endl;
//
//	double sumd1 = 0;
//	for (int i = num-1; i >-1; --i) {
//		sumd1 += 1.0 / static_cast<double>(i + 1);
//	}
//	cout << sumd1 << endl;
//
//
//	long double sumld1 = 0;
//	for (int i = num - 1; i >-1; --i) {
//		sumld1 += 1.0 / static_cast<long double>(i + 1);
//	}
//	cout << sumld1 << endl;
//	
//
//
//	//string s1 = "ababaaba", s2 = "a*ba";
//	//cout << isMatch_on(s1, s2) << endl;
//	//s1 = "aa";
//	//s2 = "*a";
//	//cout << isMatch_on(s1,s2) << endl;
//	//s1 = "aaaabaaaabbbbaabbbaabbaababbabbaaaababaaabbbbbbaabbbabababbaaabaabaaaaaabbaabbbbaababbababaabbbaababbbba";
//	//s2 = "*****b*aba***babaa*bbaba***a*aaba*b*aa**a*b**ba***a*a*";
//	//cout << isMatch_on(s1, s2) << endl;
//	//s1 = "aaaaaaaaaaaaaaac";
//	//s2 = "*aaaaaaaaaaaaaaa*b";
//	//cout << isMatch_on(s1, s2) << endl;
//	return 0;
//}