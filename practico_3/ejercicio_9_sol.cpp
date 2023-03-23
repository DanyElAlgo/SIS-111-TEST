#include <iostream>
using namespace std;
int main() {

string idas;
int regresos = 0;

getline(cin, idas);

for (int i = 0; i < idas.size(); i++) {
	
	if (idas[i] == ' ') { continue;}
	
	if (idas[i] == '1') {
	cout << "Om-nom-nom :P" << endl; regresos +=1;}
	
	if (idas[i] == '0') {
	cout << "No cake :(" << endl; break;}
 
	if (regresos == 10)
{ break;}
	}
}
