#include<iostream>

using namespace std;

int main () {
	
	int age, exp;
	
	cin >> age >> exp;
	
	if (age >= 18 && exp >= 5) {
	
	cout << "Usted es elegible como candidato a Director Senior." << endl;
	
	}
	
	else if (age >= 18 && exp >=3) {
	
	cout << "Usted es elegible como candidato a Director de proyecto." << endl;
	
	}
	
	else if (age >=18) {
		
	cout << "Usted es elegible como candidato a Coordinador de proyecto." << endl;
	
	}
	
	else {
		
	cout << "Usted no puede ser candidato a ningún puesto, lo sentimos mucho." << endl;
	
	}
	
}