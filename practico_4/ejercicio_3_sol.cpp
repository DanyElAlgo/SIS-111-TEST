#include<iostream>
using namespace std;
int main () {
	
int digit;
string text;
int i;

cin >> digit;

while (digit >= 1) {
    text += to_string (digit % 2);
    digit /= 2;
    
    }
i = text.size() -1;
while (i >=0) {
    
    cout << text[i];
    i -=1;
    
    }
}
