//#include<algorithm>
//#include <iostream>
//#include <stdlib.h>
//#include <string.h>
//#include  <stdio.h>
//#include   <math.h>
//#include   <time.h>
//#include   <vector>
//#include   <bitset>
//#include    <queue>
//#include      <set>
//#include      <map>
//using namespace std;
//
//typedef long long LL;
//
//const int N = 100005, Mod = 1e9 + 7;
//
//int n, x[N], y[N], f[N], Num[N], s[N], inc[N], ans[N];
//
////
//void Add(int x, int k)
//{
//	while (x <= n)
//		s[x] = (s[x] + k) % Mod, x += x&-x;
//}
//
//int Sum(int x)
//{
//	int ss = 0;
//	while (x)
//		ss = (ss + s[x]) % Mod, x -= x&-x;
//	return ss;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 1, a, b; i <= n; i++)
//		scanf("%d%d", &a, &b), x[i] = a, y[a] = b;
//	for (int i = n; i >= 1; i--)
//		Num[i] = n - i - Sum(y[i]), Add(y[i], 1);
//	inc[0] = inc[1] = 1;
//	int fac = 1;
//	for (int i = 2; i <= n; i++)
//		inc[i] = (Mod - (Mod / i)*(LL)inc[Mod%i] % Mod) % Mod, fac = fac*(LL)(i - 1) % Mod;
//	memset(s, 0, sizeof s);
//	int count = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = (LL)(Sum(y[i]) + 1)*inc[Num[i]] % Mod;
//		Add(y[i], f[i]);
//		if (Num[i] == 0)ans[i] = f[i] * (LL)fac%Mod, count++;
//		else ans[i] = 0;
//	}
//	for (int i = 1; i <= n; ++i)printf("%d\n", ans[x[i]]);
//	//    cout<<count<<endl;
//	return 0;
//}
////#include<iostream>
////#include<string>
////#include<vector>
////#include<map>
////#include<iomanip>
////#include<algorithm>
////#include<fstream>
////#include <queue>
////#include<map>
////#include<set>
////#include<unordered_set>
////#include<unordered_map>
////#include <random>
////#include <cmath>
////#include<utility>
////#include<limits>
////#include<functional>
////using namespace std;
////#define PrintEx(EX) cout<<#EX<<" :\n"<<EX<<endl
////
////const int MOD = 1e9 + 7;
////using pt = pair<int, int>;
//////union find
////int main() {
////	int n,tmp,max_t =1,tmp_n_1;
////	cin >> n;
////	vector<pt> arr(n);
////
////	vector<vector<int>> root(n);
////
////	for (int i = 0; i < n; i++) {
////		cin >> arr[i].first>>arr[i].second;
////		for (int j = 0; j < i; j++) {
////			if (arr[j].first <= arr[i].first && arr[j].second <= arr[i].second)
////				root[j].push_back(i);
////			if (arr[j].first >= arr[i].first && arr[j].second >= arr[i].second)
////				root[i].push_back(j);
////		}
////	}
////	tmp_n_1 = 1;
////	for (int i = 2; i < n; i++) {
////		tmp_n_1 *= i;
////		tmp_n_1 %= MOD;
////	}
////	vector<int> res(n, tmp_n_1);
////	vector<int> helper(n+1,0);
////	helper[1] = 1;
////	for (int i = 2; i < n; i++)
////		helper[i] = (long long)(MOD - MOD / i) * helper[MOD % i] % MOD;
////	for (int i = 0; i < n; i++) {
////		if (root[i].empty()) {
////			continue;
////		}
////		for (auto it : root[i]) {
////			res[it] += (long long)(res[i] * helper[root[i].size()]) % MOD;
////		}
////		res[i] = 0;
////
////	}
////
////
////	for (int i = 0;i<n;i++)
////		cout << res[i] << endl;;
////	return 0;
////}