//Leandro Cardoso
//Julio Leal


#include <iostream>
#include "3.h"

using namespace std;


int main (){
int dia,ano;
int mes;


cout<<"Digite o dia: "<<endl;
cin>>dia;

cout<<"Digite o mês: "<<endl;
cin>>mes;
while(mes<1 || mes>12){
cout<<"Digite um mês entre 1 e 12: "<<endl;
cin>>mes;
}
cout<<"Digite o ano: "<<endl;
cin>>ano;
Date e(dia,mes,ano);
e.displayDate();

return 0;

}
