#include <iostream>
#include <cmath>
using namespace std;

int main() {

short int i;
long unsigned int result = 1;

cout << "Pon un número al cual\nle buscaré su factorial." << endl;

cin >> i;

for (i; i; i--) {
	
	if (i <= -1 ) {cout << "ERROR! No puedes usar un\nnúmero negativo!!";break;}
	
	if (i > 65) {cout << "ERROR! Por favor, no uses un número tan\ngrande, sobrecargarás la PC!!"; break;}
	
	result *= i;
	
	if (i == 1) {cout << result << endl; break;}
	
	}
}
