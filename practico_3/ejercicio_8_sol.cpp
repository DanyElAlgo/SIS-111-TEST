#include <iostream>
using namespace std;
int main() {
    
 string query;
 getline (cin, query);

 cout << "[";
for (int i = 0; i <= query.size(); i++) { cout << query[i];
     if (query[i+1] == ' ' ) {
        cout << "]\n["; i += 1;
     }
}
cout << "]" << endl;
}
