#include <iostream>
using namespace std;
int main() {

int X;
int Y;

cin >> X >> Y;

if (X < Y) {
	for (X, Y; X <= Y; X += 1) {
		cout << X << endl;}
	
	}
else if (X > Y) {
	for (X, Y; X >= Y; X -= 1) {
		cout << X << endl;}
	}
else if (X == Y) {
	cout << X << endl;}
}
