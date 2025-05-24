#include <bits/stdc++.h>
using namespace std;

int main() {

	int n,xp;
	vector<int> xn;
	cin >> n >> xp;
	for (int i = 0; i < n; i++){
		int x;
		cin >> x;
		int y = xp;
		int g = 0;
		int o = 2;
		while (x != 1){
			if(x % o == 0 && y % o != 0){
				g = g + 1;
			}
			while (x % o == 0)
				x = x / o;
			o = o + 1;
		}
		xn.push_back(g);
	}
	int z = xn[0];
	int w = 1;
	for (int i = 1; i < n; i++){
		if (xn[i] > z){
			z = xn[i];
			w = i + 1;
		}	
	}
	cout << w << endl;
	return 0;
}
