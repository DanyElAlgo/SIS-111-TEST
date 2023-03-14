#include<iostream>
using namespace std;
int main () {
	
	unsigned short int X;
	unsigned short int Y;
	
	
	
	cin >> X >> Y;
	
	if (X == Y) {
		cout << "La naranja se divide en dos partes iguales." << endl;
		}
	else if (X > Y) {
		cout << "Cortar " << X - Y << " de la primera parte." << endl;
		}
	else if (Y > X) {
		cout << "Cortar " << Y - X << " de la segunda parte." << endl;
		}
}
