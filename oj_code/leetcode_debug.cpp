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
//int longestValidParentheses(string s) {
//	bool flag = false;
//	int len = s.length(), ret = 0, left_cnt = 0, cur_cnt = 0;
//
//	vector<int> dp(len, 0);
//	for (int i = 0; i<len; ++i) {
//		if (s[i] == '(') {
//			++left_cnt;
//		}
//		else
//		{
//			if (left_cnt > 0) {
//				--left_cnt;
//				cur_cnt += 2;
//				if (left_cnt == 0) {
//					dp[i] = cur_cnt;
//					if (i - cur_cnt>-1)
//						dp[i] += dp[i - cur_cnt];
//					ret = max(ret, dp[i]);
//				}
//
//			}
//			else {
//				cur_cnt = 0;
//			}
//		}
//	}
//	if (cur_cnt) {
//		dp[len - 1] = cur_cnt + dp[len - 1 - cur_cnt];
//		ret = max(ret, dp[len - 1]);
//	}
//
//	return ret;
//}
//int main() {
//	string s("()()()(()))()()())))((()()()(()()))(()()()((()()))())(((())()())(()(()(()(())(((()())()))(()))()))))()())(()))))()()(())()()((())()()))))((()))))(()()((()(()(()())((())()()()()))()()()(())()()())((((()(())())))(((()(((()((((())())(()()()()(((((()))()(()(())))(((()()()()(()(((())(()(()()(()(()(())()))))))()))()())((()((((()(())(()()()(((((()())()))))())))((((()()()(()(())(((())(((()()((()((()(((()(()))(((())(((()((((()(())(((()((()(()())))))(()(()()(())))))()(()()((()))()))())())((())))()(())((((()((()))))()())()))((()(()())()())()()((()))())(()(()(())((((((()()((((())))())(((()()())))()(((()(()()((((())))))()()((((()(()()())(()(())()()()((()(()((((())))((((((())(()())()))))(()(()))()))))))(()()((()()()())(())))(((()))(()()()(()))((())()()()())()()(((())(()(())()()(()())((()()(((((())(()((((()(()()()(()))(()((((())()())()())())))())(((()(()((())()()((((()()()()))))))())())()(((((()())()(()()()()()(((())((((((()))(())()(()())(()(()())(()(())))())))(()()(()((((()()(())(()))()))(()))(()())())()))))))()()(())))))()))()(()())))((())(()()))()((()))()(())()()((((())()))((()(()))()(((()())()(()()((()())((((())()))))()(())())())())(((()(()())))((()))))()())))))(()((())))()())((()))()()))(())())()))()()((()(((())()()()((()()(()(())(()))())())(((()())(()())(()((()()()())()(()(((((((()()(((()(((((((())(()))))())()))))))))()(()(()((((())(()()(((()))()(())(((((((((()(()())())()(((()((()(((()(()()(()))(())))))))(((");
//	cout << longestValidParentheses(s)<<endl;
//	return 0;
//}