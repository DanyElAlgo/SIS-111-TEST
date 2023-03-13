#include <iostream>
using namespace std;
int main() {
    
    string h1;
    string h2;
    string h3;
    string htry;
    
    cin >> h1 >> h2 >> h3 >> htry;
    
    if (htry == h1) {
        
        cout << "Enter the house 1." << endl;
    }
    else if (htry == h2) {
        
        cout << "Enter the house 2." << endl;
    }
    else if (htry == h3) {
        
        cout << "Enter the house 3." << endl;
    }
    else {
        
        cout << "Seek somewhere else." << endl;
    }
    return 0;
}
