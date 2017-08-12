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
//using namespace std;
//#define PrintEx(EX) cout<<#EX<<" :\n"<<EX<<endl
//const int MAX_INT = numeric_limits<int>::max();
//int divide(int dividend, int divisor) {
//	int ret = MAX_INT;
//	if (divisor == 0)
//		return ret;
//	bool is_positive = (dividend >= 0 && divisor > 0) || (dividend < 0 && divisor < 0);
//	if (is_positive && (divisor) == -1 && (dividend) == numeric_limits<int>::lowest())
//		return ret;
//	ret = 0;
//	long long tmp = 0,foo = 1;
//	long long dvd = abs(dividend);
//	long long dvs = abs(divisor);
//	while (dvd >= dvs)
//	{
//		tmp = 1;
//		foo = dvs;
//		while (dvd >= foo)
//		{
//			foo <<= 1;
//			tmp <<= 1;
//		}
//		foo >>= 1;
//		tmp >>= 1;
//		dvd -= foo;
//		ret += tmp;
//	}
//	if (!is_positive)
//		ret *= -1;
//	return ret;
//}
//
//int main() {
//	cout << divide(numeric_limits<int>::lowest(), 1) << endl;
//	return 0;
//}
//
