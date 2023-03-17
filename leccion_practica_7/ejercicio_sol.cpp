#include <iostream>
using namespace std;
int main() {
 unsigned int X;
 unsigned short int Y = 2;
 string R = "Es un número primo.";
 
 cout << "Dame un número positivo, averiguaré si es primo o no." << endl;
 cin >> X;

while (Y <= X / 2) {
    if (X % Y != 0) {
        Y += 1;
        }
    else {
        R = "No es un número primo.";
        break;
        }
    }
cout << R << endl;


    return 0;
}
