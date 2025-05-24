#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,h1,m1,h2,m2,t1,t2,time;
	cin >> x;
	for (int i = 0; i < x; i++) {
		cin >> h1;
		cin.ignore(1);
		cin >> m1 >> h2;
		cin.ignore(1);
		cin >> m2 >> t1 >> t2;
		time = ((h2 - h1) * 60 + (m2 - m1)) * 60000;
		int comum = 1;
		vector<int> div = {2,3,5,7};
		t1 = t1 * 1000;
		int tf;
		if (t1 > t2)
			tf = t1;
		else
			tf = t2;
		for (auto o: div){
			while (t1 % o == 0 & t2 % o == 0){
				t1 = t1 / o;
				t2 = t2 / o;
				comum = comum * o;
			}
		}
		int intervalo = (t1 * t2 * comum);
		cout << time / intervalo << "\n";
	}
	return 0;
}
