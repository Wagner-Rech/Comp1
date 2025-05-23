#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b;
	set<int> merge;
	cin >> a >> b;
	for (int i = 0; i < a + b; i++) {
		int c;
		cin >> c;
		merge.insert(c);
	}
	set<int>::iterator it = merge.begin();
	for (int i = 0; i < merge.size(); i++) {
		cout << *it << " ";
		++it;
	}
	cout << endl;
	return 0;
}
