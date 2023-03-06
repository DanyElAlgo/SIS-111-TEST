#include <iostream>

using namespace std;

int main() {
    
 int digito_1;
 int digito_2;
 int suma;
 int cantidad;
 
 cin >> digito_1 >> digito_2;
 
 suma = digito_1 + digito_2;
 string resultado = to_string(suma);
 cantidad = resultado.size();
 suma = stoi(resultado);
 
 cout << suma * cantidad << endl;
 
    return 0;
}