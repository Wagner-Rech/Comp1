#include <bits/stdc++.h>
using namespace std;

vector<set<int>> chefe;

void cadeia(int i, int x) {
	if (chefe[x].empty()) {
	}
	else {
		for (auto y: chefe[x]) {
		chefe[i].insert(y);
		cadeia(i,y);
		}
	}
}

int main() {
	vector<int> conv_tot;
	int total,convidados;
	cin >> total >> convidados;
	int hierarquia[total+1];
	for (int i = 1; i <= total + 1; i++) {
		hierarquia[i] = 0;
	}
	chefe.resize(total + 1);
	for (int i = 2; i <= total; i++) {
		int n;
		cin >> n;
		chefe[i].insert(n);
		hierarquia[i] = hierarquia[n] + 1;
		cadeia(i,n);
	}
	for (int i = 0; i < convidados / 2; i++) {
		int a,b, menor,novo;
		menor = -1;
		novo = -1;
		cin >> a >> b;
		for (auto c: chefe[a]){
			for (auto d: chefe[b]){
				if (c == d & hierarquia[c] > menor & c != a & c != b) {
					menor = hierarquia[c];
					novo = c;
				}
			}
		}
		conv_tot.push_back(a);
		conv_tot.push_back(b);
		conv_tot.push_back(novo);
	}
	for (int i = 0; i < conv_tot.size(); i++) {
		int ind,num;
		ind = i;
		num = conv_tot[i];
		for (int o = i; o < conv_tot.size(); o++) {
			if (conv_tot[o] < num) {
			num = conv_tot[o];
			ind = o;
			}
		}
		conv_tot.erase(conv_tot.begin()+ind);
		conv_tot.insert(conv_tot.begin()+i,num);
	}
	for (auto z: conv_tot) {
		cout << z << " ";
	}
	cout << endl;

	return 0;
}
