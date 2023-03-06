#include<iostream>

using namespace std;

int main ()
{

	int doc;
		
	cin >> doc;
	
	if (doc == 0) {
		
		cout << "No se encontraron documentos." << endl;
		}	
		
	else if (doc == 1) {
				
		cout << "Se encontró un documento." << endl;
		}
	else {
		
		cout << doc << " documentos encontrados." << endl;	
	
	}
			
				
}
