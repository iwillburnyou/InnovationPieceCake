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
//struct nlp {
//	string a, b;
//	string align_a, align_b;
//	
//	int dis;
//	nlp(string &s1,string &s2) : a(s1),b(s2){
//		dis = 0;
//		if (a.length() < b.length()) {
//			//a.swap(b);
//		}
//	}
//	void process() {
//		enum act {
//			INS = 0,
//			DEL,
//			REP,
//			NOT
//		};
//		int l1 = a.length(), l2 = b.length();
//		vector<vector<int>> dp(l1 + 1, vector<int>(l2 + 1, 0));
//		for (int i = 0; i <= l1; ++i) {
//			dp[i][0] = i;
//			
//		}
//		for (int i = 0; i <= l2; ++i) {
//			dp[0][i] = i;
//			
//		}
//		
//		for (int i = 1; i <= l1; ++i) {
//			for (int j = 1; j <= l2; ++j) {
//				int del = dp[i - 1][j]+1, ins = dp[i][j - 1]+1, rep = dp[i - 1][j - 1];
//				if (a[i - 1] != b[j - 1]) {
//					++rep;
//					
//				}
//				if (ins <= del && ins <= rep) {
//					dp[i][j] = ins;
//					
//				}
//				else if (del <= ins && del <= rep) {
//					dp[i][j] = del;
//					
//				}
//				else {
//					dp[i][j] = rep;
//				}
//			}
//		}
//		dis = dp[l1][l2];
//		//print align
//		{
//			int bk_i = l1, bk_j = l2;
//			while (bk_i > 0 || bk_j > 0) {
//
//				/*switch (record[bk_i][bk_j])
//				{
//					case INS:
//						align_a += '-';
//						align_b += b[bk_j-- - 1];
//						
//						break;
//					case DEL:
//						align_a += a[bk_i-- -1];
//						align_b += '-';
//						
//						break;
//					case REP:
//					case NOT:
//						align_a += a[bk_i-- - 1];
//						align_b += b[bk_j-- - 1];
//						break;
//					default:
//						break;
//				}*/
//				if (bk_i > 0 && dp[bk_i][bk_j] == dp[bk_i - 1][bk_j] + 1) {
//					align_a += a[bk_i-- - 1];
//					align_b += '-';
//				}
//				else if (bk_j > 0 && dp[bk_i][bk_j] == dp[bk_i][bk_j - 1] + 1) {
//					align_a += '-';
//					align_b += b[bk_j-- - 1];
//				}
//				else
//				{
//					align_a += a[bk_i-- - 1];
//					align_b += b[bk_j-- - 1];
//				}
//				cout << align_a << endl;
//				cout << align_b << endl;
//			}
//			reverse(align_a.begin(), align_a.end());
//			reverse(align_b.begin(), align_b.end());
//
//			cout << align_a << endl;
//			cout << align_b << endl;
//		}
//	}
//	
//	void test() {
//		process();
//		cout << dis << endl;
//	}
//	void retest(string s1, string s2) {
//		//if (s1.length() > s2.length()) {
//			a = s1;
//			b = s2;
//		//}
//		//else
//		//{
//		//	a = s2;
//		//	b = s1;
//		//}
//		align_a.clear();
//		align_b.clear();
//
//		test();
//
//	}
//};
//int main() {
//	string s1 = "",s2 = "adbd";
//	//string s1 = "AGGCTATCACCTGACCTCCAGGCCGATGCCC", s2 = "TAGCTATCACGACCGCGGTCGATTTGCCCGAC";
//	nlp a(s1, s2);
//	a.test();
//
//	a.retest("AGGCTATCACCTGACCTCCAGGCCGATGCCC", "TAGCTATCACGACCGCGGTCGATTTGCCCGAC");
//
//	return 0;
//}