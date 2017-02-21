#include <iostream>
#include<vector>
using namespace std;


// A(n,r)
//void Perm(int k, int n, int a[],int r ){
//	if (k == r){
//		for (int i = 0; i < r; i++)
//			cout << a[i] << ' ';
//		cout << endl;
//		return;
//
//	}
//	for (int i = k; i < n; i++){
//		swap(a[k], a[i]);
//		Perm(k + 1, n, a , r);
//		swap(a[i], a[k]);      //back trace
//
//	}
//
//}
//
//int main(){
//	
//	int i, n, a[10];
//	while (cin >> n, n){
//		for (i = 0; i < n; i++) a[i] = i + 1;
//		Perm(0, n, a , n);
//
//	}
//	return 0;
//
//}

//bool visited[10];
//void dfs(int pos, int cnt, int n, int k, int a[]){
//	if (cnt == k){
//		for (int i = 0; i < n; i++)
//			if (visited[i]) cout << a[i] << ' ';
//		cout << endl;
//		return;
//
//	}
//	if (pos == n) return;
//	if (!visited[pos]){
//		visited[pos] = true;
//		dfs(pos + 1, cnt + 1, n, k, a);
//		visited[pos] = false;    //back trace
//
//	}
//	dfs(pos + 1, cnt, n, k, a);
//
//}
//int main(){
//	int i, n, k, a[10];
//	while (cin >> n >> k, n || k){
//		for (i = 0; i < n; i++) a[i] = i + 1;
//		dfs(0, 0, n, k, a);
//
//	}
//	return 0;
//
//}

//bool visited[1024];
//void dfs(int pos, int cnt, int n, int k, std::vector<int> &res){
//	if (cnt == k){
//		for (int i = 0; i < n; i++)
//			if (visited[i])
//				res.push_back(i);
//		//cout << endl;
//		return;
//
//	}
//	if (pos == n) return;
//	if (!visited[pos]){
//		visited[pos] = true;
//		dfs(pos + 1, cnt + 1, n, k,  res);
//		visited[pos] = false;    //back trace
//
//	}
//	dfs(pos + 1, cnt, n, k,  res);
//
//}

//void getConbinationVector(int n, int k, std::vector<int > &vec) {
//
//	std::fill(visited, visited + 1024, false);
//	//int*  a = new int[n];
//	//for (int i = 0; i < n; i++)
//	//	a[i] = i;
//
//	dfs(0, 0, n, k,  vec);
//
//	//delete a;
//}
//int main(){
//	int i, n, k, a[10];
//	vector<int> vec;
//	while (cin >> n >> k, n || k){
//
//		vec.clear();
//
//		getConbinationVector(n, k, vec);
//
//		for (auto it : vec)
//			cout << it << endl;
//	}
//
//	
//	return 0;
//
//}

