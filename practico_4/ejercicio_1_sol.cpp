#include <iostream>

using namespace std;

int main() {
	
int saldo;
int costo = 5;
string respuesta;

cout << "Bienvenido. Introduzca su saldo disponible.\n(usa solo números positivos!)" << endl;
cin >> saldo;
cout << "Se venden helados a " << costo << "$ cada uno." << endl;

while (saldo >= costo) {
    
    cout << "Tienes " << saldo << "$ disponibles." << endl;
    cout << "¿Quieres comprar un helado? si/no" << endl;
    cin >> respuesta;
    
    if (respuesta == "si" ) {
    	
    	cout << "Compraste un helado!" << endl; saldo -= costo;}
    else if (respuesta == "no") {break;}
    else {
    	cout << "Respuesta no válida. (Usa \"si\" para comprar o \"no\" para salir)" << endl;}
    
}

if (saldo < costo) {
	cout << "No tienes suficiente saldo disponible para comprar más helado.\nSe cerrará la aplicación." << endl;}

cout << "Gracias por usar nuestra aplicación.";
}
