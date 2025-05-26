#include <bits/stdc++.h>
using namespace std;
int main() {
	int x,y;
	y = 1;
	cin >> x;
	for (int i = 0; i < x; i++){
		y = (y * 2) % 1000000007;
	}
	y = (y * 2 - 3)% 1000000007;
	cout << y << endl;
	return 0;
}
