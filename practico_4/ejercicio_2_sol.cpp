#include<iostream>
using namespace std;
int main () {
	
	
	int digit;
	int i = 0;
	int j;
	string code;
	
	cin >> digit;
	
	code = to_string (digit);
	j = code.size() -1;
	
	while (i <= j) {
		
	if (code[i] == code[j]) {i+= 1; j-= 1;}
	else {
		cout << "No es palíndromo."; break;}
	}
	if (code[i] == code[j]) {
		cout << "Es un palíndromo.";}
}
