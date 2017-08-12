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
//
//const int MOD = 100;
//using Mat = vector<vector<int>>;
//
//
//void operator*=(Mat & a, const Mat & b) {
//	int r = a.size();
//	if (r == 0)
//		return;
//	int c = a.front().size();
//	Mat tmp(r,vector<int>(c,0));
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			for (int k = 0; k < c; k++) {
//				tmp[i][j] += a[i][k] * b[k][j] ;
//				tmp[i][j] %= MOD;
//			}
//		}
//	}
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++) {
//			a[i][j] = tmp[i][j];
//		}
//	}
//}
//
//int main() {
//
//	if (true, false,true)
//		cout << 1 << endl;
//	if (false, true,false)
//		cout << 2 << endl;
//	return 0;
//	int n, k,tmp,loop = -1,start = 0;
//	cin >> n >> k;
//	vector<int> arr(n),res(n,0);
//	vector<vector<int>> matrix(n,vector<int>(n,0)),mat(n,vector<int>(n,0));
//	for (int i = 0; i < n; i++)
//		cin >> arr[i];
//	tmp = 1;
//	//build matrix
//	for (int i = 0; i < n; i++) {
//		
//		mat[i][i] = 1;
//		matrix[i][tmp - 1] = 1;
//		if (i == n - 1) {
//			tmp = 0;
//		}
//		matrix[i][tmp++] = 1;
//	}
//
//	
//	while (k)
//	{
//		if (k & 1) {
//			mat *= matrix;
//		}
//		matrix *= matrix;
//		k >>= 1;
//	}
//	if (!arr.empty()) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				res[i] += (arr[j] * mat[i][j]) ;
//				res[i] %= MOD;
//			}
//		}
//		cout << res.front();
//		for (size_t i = 1; i <res.size(); i++)
//			cout << ' '<< res[i];
//		cout << endl;
//	}
//	return 0;
//}