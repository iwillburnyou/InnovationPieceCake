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
//using ll = long long int;
//#define PrintEx(EX) cout<<#EX<<" :\n"<<EX<<endl
////C
//ll n;
//ll sum = 0;
//vector<vector<ll>> c;
//long long int borrow(ll & s, ll &t) {
//	long long int ret = 0;
//	if (s > sum && t < sum) {
//		if (s + t > 2 * sum) {
//			ret += static_cast<long long int>(sum - t);
//			s = s - (sum - t);
//			t = sum;
//		}
//		else
//		{
//			ret += static_cast<long long int>(s - sum);
//			t += (s - sum);
//			s = sum;
//		}
//	}
//	else if(s<sum && t>sum)
//	{
//		return borrow(t, s);
//	}
//	return ret;
//}
//long long int borrow(ll a1, ll b1, ll a2, ll b2) {
//	if (a1 > n - 1 || a2 > n - 1)
//		return 0;
//	return borrow(c[a1][b1], c[a2][b2]) * static_cast<long long int>((abs(b1-b2) + abs(a1-a2)));
//}
//int main() {
//	cin >> n;
//	c.resize(n, vector<ll>(2, 0));
//	for (int i = 0; i < n; ++i) {
//		cin >> c[i][0] >> c[i][1];
//		sum += c[i][0] + c[i][1];
//	}
//	long long int res(0);
//	sum /= (2 * n);
//	ll tmp = 0;
//	for (ll i = 0; i < n; ++i) {
//		tmp = 1;
//		res+=borrow(i, 0, i, 1);
//		for (int k = 0; k < 2; ++k) {
//			if (c[i][k] > sum)
//			{
//				c[i + 1][k] += c[i][k] - sum;
//				res += c[i][k] - sum;
//				c[i][k] = sum;
//			}
//			else if (c[i][k] < sum) {
//				res += sum - c[i][k];
//				c[i + 1][k] = c[i + 1][k] - (sum - c[i][k]);
//				c[i][k] = sum;
//			}
//		}
//
//		
//		//while (c[i][0] != sum )
//		//{
//		//	res+=borrow(i,0, i + tmp - 1,1);
//		//	res+=borrow(i,0, i + tmp,0);
//		//	++tmp;
//		//}
//		//tmp = 1;
//		//res += borrow(i,1, i + tmp,1);
//		//++tmp;
//		//while (c[i][1] != sum)
//		//{
//		//	res+=borrow(i,1, i + tmp-1,0);
//		//	res += borrow(i, 1, i + tmp, 1);
//
//		//	++tmp;
//		//}
//
//	}
//	cout << res << endl;
//	return 0;
//}
//B
//long long int n, q;
//long long int foo(long long int jobs) {
//	long long int ret;
//	if (jobs < 2)
//		return jobs;
//	ret = min(jobs, q + foo((jobs+1) / 2));
//	return ret;
//}
//int main() {
//	cin >> n >> q;
//	cout<<foo(n)<<endl;
//	return 0;
//}
//using coord = pair<int, int>;
//int n;
//vector<coord> arr;
//unordered_map<int, int> m1, m2, m3, m4;
//int main() {
//	cin >> n;
//	arr.resize(n);
//	int cnt = 0;
//
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i].first >> arr[i].second;
//		cnt += m1[arr[i].first];
//		++m1[arr[i].first];
//		cnt += m2[arr[i].second];
//		++m2[arr[i].second];
//
//		cnt += m3[arr[i].first + arr[i].second];
//		++m3[arr[i].first+ arr[i].second];
//		cnt += m4[arr[i].second - arr[i].first];
//		++m4[arr[i].second - arr[i].first];
//
//	}
//	cout << cnt << endl;
//	return 0;
//}

/*
int main() {
std::random_device rd;  //Will be used to obtain a seed for the random number engine
std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
std::uniform_int_distribution<> dis(1, 6);

for (int n=0; n<10; ++n)
//Use dis to transform the random unsigned int generated by gen into an int in [1, 6]
std::cout << dis(gen) << ' ';
std::cout << '\n';
return 0;
}
*/