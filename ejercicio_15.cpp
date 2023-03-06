#include<iostream>

using namespace std;

int main () {
	
	char n;
	
	cin >> n;
	
	int S = static_cast <int>(n);
	
	if (64 < S&&S < 91) {
	
	cout << "El carácter está en mayúsculas." << endl;
	
	}
	
	else if (96 < S&&S < 123) {
	
	cout << "El carácter está en minúsculas." << endl;
	
	}
	
	else {
		
	cout << "No es un carácter." << endl;
	
	}
	
}
