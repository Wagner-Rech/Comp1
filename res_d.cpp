#include <bits/stdc++.h>
using namespace std;

int main() {
	string msg;
	size_t found;
	getline(cin, msg);
	if (msg.find("Daniel Sad") != string::npos) {
		found = msg.find("Daniel Sad");
		msg.insert(found+9,1,'a');
	}
	else if (msg.find("daniel sad") != string::npos) {
		found = msg.find("daniel sad");
		msg.insert(found+9,1,'a');
	}
	cout << msg << endl;
	return 0;
}
