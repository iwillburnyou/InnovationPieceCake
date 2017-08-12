

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<iomanip>
#include<algorithm>
#include<fstream>
#include <queue>
#include<map>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include <random>
#include <cmath>
#include<utility>
#include<limits>
#include<functional>
#include<stack>
using namespace std;
#define PrintEx(EX) cout<<#EX<<" :\n"<<EX<<endl

class Solution {
	vector<vector<char>> board;
	vector<vector<char>> ans;
	static vector<char> all;
	vector<unordered_set<char>> row_hash;
	vector<unordered_set<char>> col_hash;
	bool succ;
	void print(vector<vector<char>> & foo) {
		for (auto it_r : foo) {
			for (auto it_c : it_r)
				cout << it_c;
			cout << endl;
		}
		cout << "--------------------\n";
	}
	void init_hash() {

	}
	inline char get_ele(int idx) {
		return ans[idx / 9][idx % 9];
	}
	inline void reset_ele(int idx) {
		ans[idx / 9][idx % 9] = '.';
	}
	inline void set_ele(int idx,char c) {
		ans[idx / 9][idx % 9] = c;
	}
	vector<char> get_valid_ele(int idx) {
		vector<char> a;
		//set_difference(all.begin(),all.end(), ans[idx / 9].begin(), ans[idx / 9].end(),back_inserter(a));
		bool flag = false;
		for (auto it : all) {
			flag = false;
			for (auto itt : ans[idx / 9]) {
				if (itt == it)
				{
					flag = true;
					break;
				}
			}
			if (flag) continue;
			for (int i = 0; i < 9;++i) {
				if (ans[i][idx%9] == it)
				{
					flag = true;
					break;
				}
			}
			if (flag) continue;
			//check 3x3 block
			int blockx = ((idx / 9) / 3) * 3, blocky = ((idx % 9) / 3) * 3;
			for (int i = 0; i < 3; ++i) {
				for (int j = 0; j < 3; ++j) {
					if (ans[blockx + i][blocky + j] == it) {
						flag = true;
						break;
					}
				}
			}
			if (flag) continue;
			a.emplace_back(it);
		}
		return a;
	}
	void dfs(int idx) {
		if (idx == 81) {
			succ = true;
			return;
		}
		if (get_ele(idx) != '.') {
			dfs(idx + 1);
			return;
		}
		vector<char> valid = get_valid_ele(idx);
		for (auto it : valid) {
			set_ele(idx,it);
			dfs(idx+1);
			if (succ) break;
				
			reset_ele(idx);
		}
	}
public:
	void solve(vector<vector<char>> & b) {
		board = b;
		ans = b;
		succ = false;
		print(board);
		init_hash();
		solveSudoku();
		
		print(ans);
	}
	void solveSudoku() {
		dfs(0);
	}
};
vector<char> Solution::all = { '1','2', '3','4', '5','6', '7','8', '9' };

void init(string &s, vector<vector<char>> & b) {
	for (int i = 0; i < 81; ++i) {
		b[i / 9][i % 9] = s[i];
	}
}


class Solution1 {
public:
	int trap(vector<int>& height) {

		vector<int> local_max;
		//   local_max.reserve(height.size()/2);
		for (int i = 0; i<height.size(); ++i) {
			if (i == 0 || height[i] >height[i - 1]) {
				if (i == height.size() - 1 || height[i] > height[i + 1]) {
					local_max.emplace_back(i);
					cout << i << endl;
				}
			}
		}
		int bar, ret = 0;

		for (int i = 0; i< static_cast<int>(local_max.size()) - 1; ++i) {
			bar = min(height[local_max[i]], height[local_max[i + 1]]);
			for (int j = local_max[i] + 1; j<local_max[i + 1]; ++j) {
				ret += bar - height[j];
			}
		}

		return ret;
	}
};

int
main()
{
	Solution1 s;
	vector<int> a = {};
	cout << s.trap(a) << endl;
	return 0;
}
