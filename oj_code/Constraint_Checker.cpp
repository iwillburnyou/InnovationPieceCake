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
//unordered_map<string, int> var;
//int num_var = 0;
//class con {
//public:
//	con(string lpara, string op, string rpara) : left(lpara),right(rpara){
//		equal = op.size() == 2;
//		if (lpara.size() == 1
//			&& isalpha(lpara[0])) {
//			if (var.find(lpara) == var.end()) {
//				num_var++;
//				var[lpara] = 0;
//			}
//
//		}
//		else
//		{
//			var[left] = stoi(left);
//		}
//		if (rpara.size() == 1
//			&& isalpha(rpara[0])) {
//			if (var.find(rpara) == var.end()) {
//				num_var++;
//				var[rpara] = 0;
//			}
//		}
//		else
//		{
//			var[right] = stoi(right);
//		}
//	}
//	bool ok() {
//		if (equal)
//			return var[left] <= var[right];
//		else
//			return var[left] < var[right];
//	}
//	bool equal;
//	string left, right;
//};
//vector<con> vec_cons;
//bool judge() {
//	for (auto & it : vec_cons) {
//		if (!it.ok())
//			return false;
//	}
//	return true;
//}
//void parse(string str) {
//	int s = 0, e = 0;
//	auto first = str.find('<');
//
//	if (first == string::npos)
//		return;
//	bool equal = str[first + 1] == '=';
//	auto second = first;
//	second = str.find('<', second + 1);
//	while (second != string::npos)
//	{
//		e = second - 1;
//		if (equal) {
//			vec_cons.emplace_back(str.substr(s, first - s), "<=",
//				str.substr(first + 2, second - first - 2));
//			s = first + 2;
//		}
//
//		else {
//			vec_cons.emplace_back(str.substr(s, first - s), "<",
//				str.substr(first + 1, second - first - 1));
//			s = first + 1;
//		}
//		first = second;
//		equal = str[first + 1] == '=';
//		second = str.find('<', second + 1);
//
//	}
//	if (equal) {
//		vec_cons.emplace_back(str.substr(s, first - s), "<=",
//			str.substr(first + 2));
//		s = first + 2;
//	}
//	else {
//		vec_cons.emplace_back(str.substr(s, first - s), "<",
//			str.substr(first + 1));
//		s = first + 1;
//	}
//
//}
//int main() {
//
//	vector<string> conditions;
//
//	int n;
//	cin >> n, conditions.resize(n);
//	
//	for (int i = 0; i <n; i++) {
//		cin >> conditions[i];
//		parse(conditions[i]);
//	}
//	int t,tmp;
//	cin >> t;
//	while (t) {
//		t--;
//		char c;
//		bool yes = true;
//		for (int i = 0; i<num_var; i++)
//		{
//			cin >> c>>tmp;
//			var[string(1, c)] = tmp;
//		}
//		yes = judge();
//		cout << (yes ? "Yes" : "No" )<< endl;
//	}
//	return 0;
//}