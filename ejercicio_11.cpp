#include <iostream>

using namespace std;

int main() {
    
long int fibo = 11235813;
long int intento;

cin >> intento;

if (intento == fibo) {
    
    cout << "Se encontró Fibonacci.";
}
else {
    cout << "Esto no es de Fibonacci.";
}
    return 0;
}
