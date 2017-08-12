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
//int nTest;
//
////void get_next(string s, vector<int> & arr) {
////	arr.resize(s.length() + 1);
////	int p_len = s.length();
////	int i = 0, j = -1;
////	arr[0] = -1;
////	while (i<p_len)
////	{
////		if (j == -1 || s[i] == s[j]) {
////			++i;
////			++j;
////			if (s[i] != s[j])
////				arr[i] = j;
////			else
////				arr[i] = arr[j];
////		}
////		else
////		{
////			j = arr[j];
////		}
////	}
////}
//
//int strStr(string haystack, string needle) {
//	if (needle.empty())
//		return 0;
//	vector<int> next(needle.size() + 1, 0);
//	int i = 1, j = 0;
//	while (i<needle.length()) {
//
//		if (needle[i] == needle[j]) {
//			next[++i] = ++j;
//		}
//		else if (j) {
//			j = next[j];
//		}
//		else
//		{
//
//			++i;
//
//		}
//	}
//	j = i = 0;
//	while (i<haystack.length()) {
//		if (haystack[i] == needle[j]) {
//			++i;
//			++j;
//			if (j == needle.length())
//				return i - j;
//		}
//		else if (j == 0)
//		{
//			++i;
//		}
//		else {
//			j = next[j];
//		}
//	}
//
//	return -1;
//}
//int main() {
//	string s = "ABCDABD";
//	vector<int> a;
//	strStr("AAAABDAAAAAAAA", "abcxyzabcghj");
//	////get_next(s, a);
//	//cin >> nTest;
//	//while (nTest--)
//	//{
//	//	string s, t;
//	//	cin >> s >> t;
//	//	if (s.empty() || t.empty())
//	//		cout << 0 << endl;
//	//	vector<int> next(s.size()+1,0);
//	//	int i = 1, j = 0;
//	//	while (i < s.length()) {
//	//		if ((s[i]  == s[j])) {
//	//			next[++i] = ++j;
//	//			if (s[i] == s[next[i]])
//	//				next[i] = next[next[i]];
//	//		}
//	//		else {
//	//			if (j == 0)
//	//				++i;
//	//			j = 0;
//	//		}
//	//	}
//	//	int cnt = 0;
//	//	i = j = 0;
//	//	while (i<t.length())
//	//	{
//	//		
//	//		if (t[i] == s[j] ) {
//	//			++i;
//	//			++j;
//	//			if (j == s.length()) {
//	//				j = next.back();
//	//				++cnt;
//	//			}
//	//		}
//	//		else if (j == 0) {
//	//			++i;
//	//		}
//	//		else
//	//		{
//	//			j = next[j];
//	//		}
//	//	}
//	//	cout << cnt<<endl;
//	//}
//	return 0;
//}