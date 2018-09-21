//Leandro Cardoso
//Julio Leal

#include <iostream>
using namespace std;


class Date
{
private:
 int mes, dia, ano;
public:
int Datascriadas;
 Date(int dd = 0, int mm = 0, int aaaa = 0)// :dia(dd), mês(mm), ano(aaaa)
 {
  setDate(dd, mm, aaaa);
  
 }
 
 void setMes(int mm)
 {
	mes = mm;
 }
 
 void setdia(int dd)
 {
  dia = dd;
 }
 
 void setano(int aaaa)
 {
  ano = aaaa;
 }
 
 void setDate(int dd = 0, int mm = 0, int aaaa = 0)
 {
  setMes(mm);
  setdia(dd);
  setano(aaaa);
 }
 
 int getMes()
 {
  return mes;
 }
 
 int getdia()
 {
  return dia;
 }
 
 int getano()
 {
  return ano;
 }
 
 void displayDate()
 {
  cout << "A data é " << dia << '/' << mes << '/' << ano << endl;
 }};
 
