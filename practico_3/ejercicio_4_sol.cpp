#include <iostream>
#include <string>
using namespace std;
int main() {
 int a = 5;
 int b;
 do {
 	cout << "Guess the number: "s << endl; 
 cin >> b;
 } while (a != b);
 // el problema fue que olvidaron añadir el "!" a la condición, ahora rebotará el mensaje de adivinar el número hasta que a sea igual a b
 cout << "You are right!"s << endl;
}
