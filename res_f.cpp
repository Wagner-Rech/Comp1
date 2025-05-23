#include <bits/stdc++.h>
using namespace std;

int main() {

	int x,y;
	cin >> x;
	char op,div;
	vector<int> num,dem;
	int i = 1;
	cin >> x >> div >> y;
	num.push_back(x);
	dem.push_back(y);
	while(cin >> op >> x >> div >> y){
		if(cin.fail()) break;
		if(op == 'e') {
			break;
		}
		if(op == '-'){
			x = x * -1;
			num.push_back(x);
			dem.push_back(y);
			i = i + 1;
		}
		else if (op == '*'){
			num[i-1] = num[i-1] * x;
			dem[i-1] = dem[i-1] * y;       	
		}
		else if (op == '/'){
			num[i-1] = num[i-1] * y;
			dem[i-1] = dem[i-1] * x;
		}
		else {
			num.push_back(x);
			dem.push_back(y);
			i = i + 1;
		}
	}
	int divid[4] = {2,3,5,7};
	int comum = 1;
	int apar[4] = {0,0,0,0};
	for (int o = 0; o < num.size(); o++){
		int f = dem[o];
		for (int p = 0; p < 4; p++){
			int g = 0;
			while (f % divid[p] == 0){
				 g = g + 1;
				 f = f / divid[p];
			}
			if (g > apar[p]) {
				apar[p] = g;
			}
		}
	}
	for (int o = 0; o < 4; o++){
		comum = comum * pow(divid[o], apar[o]);
	}
	for (int o = 0; o < num.size(); o++){
		int h = comum / dem[o];
		num[o] = num[o] * h;
	}
	int numf = 0;
	for (auto o: num){
		numf = numf + o;
	}
	for (int o = 0; o < 4; o++) {
		while(numf % divid[o] == 0 & comum % divid[o] == 0){
			comum = comum / divid[o];
			numf = numf / divid[o];
		}
	}
	cout << numf << '/' << comum << endl;
	return 0;
}
