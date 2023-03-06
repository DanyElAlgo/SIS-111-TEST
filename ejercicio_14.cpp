#include<iostream>

using namespace std;


int main () {

	string c1, c2, c3, ctry;
	int n1, n2, n3, ntry;
	string c0 = "?";
	int n0 = -1;
	
	cin >> c1 >> n1 >> c2 >> n2 >> c3 >> n3 >> ctry >> ntry;
	
	if ((ctry == c1 || ctry == c0)&&(ntry == n1 || ntry == n0)) {
	
	cout << "1" << endl;
	
	}
	
	if ((ctry == c2 || ctry == c0)&&(ntry == n2 || ntry == n0)) {
	
	cout << "2" << endl;
	
	}
	
	if ((ctry == c3 || ctry == c0)&&(ntry == n3 || ntry == n0)) {
	
	cout << "3" << endl;
	
	}
	
}
