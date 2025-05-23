#include <bits/stdc++.h>
using namespace std;

int main() {

	string input;
	getline(cin,input);
	map<string,string> ling = {
		{"Brasil","galinha"},
		{"Argentina","gallina"},
		{"Alemanha","huhn"},
		{"Estados Unidos","hen ou chicken"},
		{"França","poule"},
		{"Israel","tarnegolet"},
		{"Egito","farkha"},
		{"Polonia","kura"},
		{"Finlandia","kana"},
		{"Japao","niwatori"},
		{"Russia","kuritsa"},
		{"Angola","to fraca"},
		{"Italia","gallina"}
	};
	cout << ling[input] << endl;
	return 0;
}
