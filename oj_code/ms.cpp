//#include <string>
//#include <vector>
//#include <set>
//#include <map>
//#include <queue>
//#include <algorithm>
//#include <iostream>
//#include <cstdio>
//#include <cstring>
//#include <cmath>
//#include <ctime>
//#include <cstdint>
//#include<unordered_map>
//
//#include <memory>
//#include <thread>
//#include <chrono>
//#include <mutex>
//using namespace std;
//
//
//class Problem2
//{
//	int edge[26][26];
//	int l;
//	std::string a, b;
//	void Read()
//	{
//		std::cin >> a >> b;
//		l = a.size();
//	}
//
//	void Init()
//	{
//		memset(edge, 0, sizeof(edge));
//		for (int i = 0; i < l; i++)
//		{
//			edge[a[i] - 'a'][b[i] - 'a']++;
//		}
//	}
//
//	void Solve()
//	{
//		int ans = 0;
//
//		for (int i = 0; i < 26; i++)
//		{
//			ans += edge[i][i];
//			edge[i][i] = 0;
//		}
//
//		while (true)
//		{
//			bool change = false;
//
//			for (int i = 0; i < 26; i++)
//			{
//				for (int j = i + 1; j < 26; j++)
//				{
//					int cyc = std::min(edge[i][j], edge[j][i]);
//					if (cyc > 0)
//					{
//						ans += cyc;
//						edge[i][j] -= cyc;
//						edge[j][i] -= cyc;
//						change = true;
//					}
//				}
//			}
//
//			for (int i = 0; i < 26; i++)
//			{
//				int out = 0;
//				int outIdx = -1;
//				for (int j = 0; j < 26; j++)
//				{
//					if (edge[i][j] > 0)
//					{
//						out++;
//						outIdx = j;
//					}
//				}
//				if (out != 1)continue;
//
//				int remove = 0;
//				for (int j = 0; j < 26; j++)
//				{
//					if (edge[j][i] == 0)continue;
//					edge[j][outIdx] += edge[j][i];
//					edge[j][i] = 0;
//					change = true;
//				}
//				if (change)break;
//			}
//
//			if (!change)break;
//		}
//
//		printf("%d\n", l - ans);
//	}
//public:
//	void Run()
//	{
//		int n;
//		scanf("%d", &n);
//		while (n--)
//		{
//			Read();
//			Init();
//			Solve();
//		}
//	}
//};
//class Problem2_1
//{
//	int edge[26][26];
//	int l;
//	std::string a, b;
//	char free_char;
//	int index_to;
//	vector<vector<int>> inverted;
//	void Read()
//	{
//		std::cin >> a >> b;
//		l = a.size();
//		free_char = 0;
//		index_to = -1;
//		inverted.clear();
//		inverted.resize(26);
//		for (int i = 0; i < l; ++i) inverted[b[i] - 'a'].emplace_back(i);
//	}
//
//	void Init()
//	{
//	
//	}
//	inline bool is_d(const char & c) {
//		return c == 'm' || c == 's' || c == 'f' || c == 't';
//	}
//	int solve1(int idx,char free,string s) {
//
//		//cout << s << endl;
// 		if ( free == 0 ) {
//			for (int i = 0; i < l; ++i) {
//				if (s[i] != b[i]) {
//					free_char = s[i];
//					//s[idx] = b[idx];
//					return solve1(i, free_char, s);
//				}
//			}
//		}
//		else if (free == b[idx]) {
//			s[idx] = free;
//			return solve1(0, 0, s);
//		}
//		else
//		{
//			string tmp_s;
//			int cur_idx = 1;
//			int dummy = 9999;
//			cur_idx = s.find(b[idx]);
//			while (cur_idx != string::npos){
//
//				if (b[cur_idx] != s[cur_idx]) {
//					tmp_s = s;
//					tmp_s[idx] = b[idx];
//					dummy = min(dummy, 1 + solve1(cur_idx, free, tmp_s));
//				}
//				cur_idx = s.find(b[idx], cur_idx+1);
//			}
//			return dummy;
//		}
//		return 0;
//	}
//	void Solve()
//	{
//		int start_idx = 0;
//		
//		cout << solve1(0,0,a) << endl;
//	}
//public:
//	void Run()
//	{
//		int n;
//		scanf("%d", &n);
//		while (n--)
//		{
//			Read();
//			Init();
//			Solve();
//		}
//	}
//};
//
//
//int main()
//{
//	Problem2_1 p;
//	p.Run();
//	return 0;
//
//	
//	
//}