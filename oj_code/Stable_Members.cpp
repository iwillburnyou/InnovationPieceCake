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
//int n, tmp, mentor;
//
//class node {
//public:
//	node(int n, int id_) :
//		r_id(id_), setted(false)
//	{
//		
//	}
//	void set_r_id(int i) {
//		r_id = i; 
//		setted= true;
//	}
//	bool setted;
//	set<int> mentors;
//	int r_id;
//};
//vector<node> arr;
//int cal_state(int index) {
//	if (index == 0)
//		return index;
//	else if (arr[index].setted)
//		return arr[index].r_id;
//	else if (arr[index].mentors.find(0) != arr[index].mentors.end())
//		arr[index].r_id = index;
//	else if (arr[index].mentors.size() == 1)
//		arr[index].r_id = cal_state(* arr[index].mentors.begin());
//	else {
//		unordered_set<int> set;
//		for (auto &it : arr[index].mentors) {
//			//set.emplace(arr[it].r_id);
//			set.emplace(cal_state(it));
//		}
//		if (set.size() > 1)
//			arr[index].r_id = index;
//		else
//			arr[index].r_id = *set.begin();
//	}
//	arr[index].setted = true;
//	return arr[index].r_id;
//}
//
//
//
//
//int main() {
//	set<int> stable = { 0 };
//	arr.emplace_back(0, 0);
//	cin >> n;
//	int res = n;
//	int i = 0;
//	while (n) {
//		++i;
//		--n;
//		cin >> tmp;
//		int num;
//		arr.emplace_back(tmp, i);
//		for (int j = 0; j < tmp; j++)
//		{
//			cin >> num;
//			arr[i].mentors.emplace(num);
//		}
//	}
//	for (size_t i = 1; i<arr.size(); i++) {
//		if (i != cal_state(i))
//			--res;
//	}
//	cout << res << endl;
//	return 0;
//}
//
