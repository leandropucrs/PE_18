#include <iostream>

using namespace std;

 int main()
 {
 int lado, pos, tamanho;  

 cout << "Enter the square side: ";
 cin >> lado;

 tamanho = lado;

 while ( lado > 0 ) {
 pos = tamanho;

 while ( pos > 0 ) {

 if ( tamanho == lado || lado == 1 || pos == 1 || pos == tamanho )

cout  << '*';
	else
	 	cout << ' ';
		--pos;
}

cout << '\n';
 --lado; }

cout << endl;

return 0;
 }
