#include <bits/stdc++.h>
using namespace std;

int main() {

	int x,y;
	cin >> x >> y;
	if (x > 270)
		x = x - 270;
	else if (x > 90)
		x = 270 - x;
	else
		x = x + 90;
	if (y > 270)
		y = y - 270;
	else if (y > 90)
		y = 270 - y;
	else
		y = y + 90;
	if (y > x)
		cout << "Olha o Claudio ali em cima!" << endl;
	else if (y < x)
		cout << "O Claudio ta ali embaixo!" << endl;
	else
		cout << "O Claudio ta do outro lado da roda!" << endl;
	return 0;
}
