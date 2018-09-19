#include <iostream>

using namespace std;


int main() {
int produto = 1;//produto começa no primeiro impar

for ( int i = 3; i <= 15; i += 2 )//i começa em 3 pq é o segundo impar após o 1 e soma de 2 em 2
produto *= i; //produto por i

cout << "Produto dos inteiros impares de 1 a 15 é: "<< produto << endl;
return 0;
}
