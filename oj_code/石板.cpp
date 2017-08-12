//
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
//const int maxn = 200000;
//map<int,int> mp;
//using ll = long long int;
//int main() {
//
//	ll n, ret = 0;
//	cin >> n;
//	int tmp;
//	for (int i = 1; i <= n; ++i) {
//		if (i & 1)
//			ret += i;
//		else {
//			tmp = i;
//			while ( (tmp & 1) == 0) {
//				tmp >>= 1;
//			}
//			ret += tmp;
//		}
//	}
//
//	cout << ret << endl;
//	return 0;
//
//	//int N, M;
//	//while (cin >> N >> M) {
//	//	vector<int> steps(M + 1, INT_MAX);
//	//	steps[N] = 0;
//	//	for (int i = N; i <= M; i++) {
//	//		if (steps[i] == INT_MAX) {
//	//			continue;
//	//		}
//	//		for (int j = 2; (j*j) <= i; j++) {
//	//			if (i%j == 0) {
//	//				if (i + j <= M) {
//	//					steps[i + j] = min(steps[i] + 1, steps[i + j]);
//	//				}
//	//				if (i + (i / j) <= M) {
//	//					steps[i + (i / j)] = min(steps[i] + 1, steps[i + (i / j)]);
//	//				}
//
//	//			}
//
//	//		}
//	//	}
//	//	if (steps[M] == INT_MAX) {
//	//		steps[M] = -1;
//	//	}
//	//	cout << steps[M] << endl;
//	//}
//	//return 0;
//	//int n, m;
//	//cin >> n >> m;
//	//mp[n] = 0;
//	//int sqr, cur;
//	//vector<int> dp(m + 1, maxn);
//	//dp[n] = 0;
//	//for (int i = n; i < m; ++i) {
//	//	if (dp[i] == maxn) continue;
//	//	for (int j = 2; j*j <= i; ++j) {
//	//		if (i%j == 0) {
//	//			if(i+j <= m)
//	//				dp[i + j] = min(dp[i] + 1,dp[i+j]);
//	//			if(i+i/j <= m)
//	//				dp[i + i/j] = min(dp[i] + 1, dp[i + i/j]);
//	//		}
//
//	//	}
//	//}
//	//cout << ((dp[m] == maxn) ? -1 : dp[m]) << endl;
//
//
//	//queue<int> q;
//	//q.push(n);
//	//do {
//	//	cur = q.front();
//	//	q.pop();
//	//	for (int i = 2; i*i <= cur; ++i) {
//	//		if (cur % i == 0) {
//	//			if (mp.find(cur+i) == mp.end()) {
//	//				mp[cur + i] = mp[cur] + 1;
//	//				q.push(cur + i);
//	//			}
//	//			if (mp.find(cur + cur/i) == mp.end()) {
//	//				mp[cur + cur / i] = mp[cur] + 1;
//	//				q.push(cur + cur / i);
//	//			}
//
//	//		}
//	//	}
//	//} while (q.front() !=m && !q.empty());
//
//
//	//if (mp.find(m) == mp.end())
//	//	cout << -1 << endl;
//	//else
//	//	cout << mp[m] << endl;
//	//return 0;
//}