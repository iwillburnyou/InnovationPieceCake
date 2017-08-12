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
//#include<memory>
//using namespace std;
//#define PrintEx(EX) cout<<#EX<<" :\n"<<EX<<endl
//
//string simplifyPath(string path) throw (){
//	string ret,tmp_str;
//	if (path.empty()) return ret;
//	
//	bool get_slash = false;
//	int cur_idx = 0,find_slash = -1;
//	//int deep = 1;
//	stack<string> st;
//	st.push("");
//	while (cur_idx<path.length())
//	{
//		if (path[cur_idx] == '/' && get_slash) {
//			++cur_idx;
//			continue;
//		}
//		else if (path[cur_idx] == '/') get_slash = true;
//		else
//		{
//			find_slash = path.find('/', cur_idx);
//			if (find_slash != string::npos) {
//				tmp_str = path.substr(cur_idx, find_slash - cur_idx);
//				cur_idx = find_slash - 1;
//			}
//			else
//			{
//				tmp_str = path.substr(cur_idx);
//				cur_idx = path.length() - 1;
//			}
//			if (tmp_str != ".") {
//				if (tmp_str != ".." ) {
//					if(st.size() > 0)
//						st.push(tmp_str);
//									
//				}
//				else
//				{
//					if (st.size() > 1)
//						st.pop();
//					else throw;
//				}
//			}
//
//		}
//		++cur_idx;
//	}
//	if (st.top().empty())
//		return "/";
//	while (st.size() > 0) {
//		if(st.top().size()!=0)
//			ret.insert(0,"/"+ st.top());
//		st.pop();
//	}
//	return ret;
//}
//void simplifyPath1(string &t) {
//	cout << t << endl;
//	cout << simplifyPath(t) << endl;
//	
//
//}
//void test() {
//	string test_str = "/home/..//../../";
//	
//	simplifyPath1(test_str);
//	test_str = "/a/./b/../../c/";
//	simplifyPath1(test_str);
//	test_str = "/../";
//	simplifyPath1(test_str);
//	test_str = "/home//foo/";
//	simplifyPath1(test_str);
//
//	test_str = "//";
//	simplifyPath1(test_str);
//	test_str = "//a/b/../..//b//../";
//	simplifyPath1(test_str);
//}
//void foo() throw (string){
//	string s("12");
//	throw s;
//}
//class A {
//	int aint;
//public:
//	~A() {
//		cout << 1 << endl;
//	}
//};
//class b :public A {
//	int aint;
//public:
//	~b() {
//		cout << 2 << endl;
//	}
//};
//int main() {
//	//test();
//	A * p = new b();
//	delete p;
//	return 0;
//}