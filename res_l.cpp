#include <bits/stdc++.h>
using namespace std;

int choose(int i, set<int> quality, map<int,vector<int>> acid, int x){
	bool validade;
	int total = 0;
	for (int o = 0; o < i; o++){
		int big = 0;
		int acd = 0;
		vector<int>::iterator it;
		vector<int>::iterator fin;
		validade = false;
		for (auto p: quality){
			it = acid[p].begin();
			for (auto f: acid[p]){
				if (f < (x / (i - o))){
					if (p > big){
						big = p;
						fin = it;
						acd = f;
						validade = true;
					}
				}
				it++;
			}
		}
		if (validade == false)
			break;
		total = total + big;
		x = x - acd;
		if (acid[big].size() > 1){
			acid[big].erase(fin);
		}
		else {
			acid.erase(big);
		}
	}
	if (validade == false){
		return 0;
	}
	else {
		return total;
	}
}
int main() {

	int n,x;
	cin >> n >> x;
	map<int,vector<int>> acid;
	set<int> quality;
	for (int i = 0; i < n; i++){
		int z,y;
		vector<int> holder;
		cin >> z >> y;
		quality.insert(y);
		acid.insert({y,holder});
		acid[y].push_back(z);
	}
	for (int i = 1; i <=  n; i++){
		int total = choose(i, quality, acid, x);
		cout << total << " ";
	}
	cout << endl;
	return 0;
}
