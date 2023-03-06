#include<iostream>

using namespace std;

int main ()
{

	float N, A, B, X, Y, R;
	
	cin >> N >> A >> B >> X >> Y;
	
	if (N > B) {
	
	R = N - (N * Y / 100);
	
	cout << R << endl;
					
	}
	
	else if (N > A) {
			
	R = N - (N * X / 100);
	
	cout << R << endl;
	
	}
	
	else {
		
	cout << N << endl;	
		
	}				
}
