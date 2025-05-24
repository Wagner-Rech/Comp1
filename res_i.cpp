#include <bits/stdc++.h>
using namespace std;

int main() {

	int x;
	cin >> x;
	if (x <= 3){
		cout << "NO SOLUTION" << endl;
	}
	else {
		for (int i = 1; i <= x; i = i + 2){
			cout << i << " ";
		}
		for (int i = 2; i <=x; i = i + 2){
			cout << i << " ";
		}
		cout << endl;
	}
	return 0;
}
