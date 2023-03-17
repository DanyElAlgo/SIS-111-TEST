#include <iostream>
using namespace std;
int main() {
    
 string query;
 getline (cin, query);
 
for (int i = 0; i <= query.size(); i++) {
     if (query[i] == ' ' ) {
         cout << i << endl;
     }
     if (query[i] == query.size()) {
         break;
     }
}
cout << query.size() << endl;
}
//Que dificil!!!!!
