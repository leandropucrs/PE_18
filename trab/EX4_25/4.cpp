//Leandro Cardoso
//Julio Leal


#include <iostream>

using namespace std;

int main(){

    int lado;
    int linha;
    int quadrado;

    cout << "Informe o lado do quadrado: " << endl;
    cin >> lado;

    quadrado = lado;

    while (lado < 1 || lado > 20){
        cout << "Informe um valor ente 1 e 20: " << endl;
        cin >> lado;

        quadrado = lado;
    }

    while ( lado > 0 ) {
        linha = quadrado;

        while ( linha > 0 ) {

            if ( quadrado == lado || lado == 1 || linha == 1 || linha == quadrado ){
                cout << '*';
               } else
                    cout << ' ';
        --linha;
        }

    cout << '\n';
    --lado;
    }

    cout << endl;

    return 0;
 }
