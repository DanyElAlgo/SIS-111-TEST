#include <iostream>
using namespace std;
int main() {

int x, y, z;

cout << "Ingrese dos numeros y luego la suma de ellos (puedes usar negativos)." << endl;

cin >> x >> y >> z;

if (-1000000 <= (x+y) && (x+y) <= 1000000) {
    
    if (x+y!=z)
    
    cout << "ERROR. La suma de " << x << " y " << y << " es: " << x+y << "." << endl;
    
    
}
    return 0;
}
