#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double salarios(int n);
int main (void) {
    double sal;
    double h;
    double ex;
    int n;
    int i;
     
cout << "CALCULO DE SALARIOS "<< endl;
cout << "Ingrese el numero de trabajadores a calcular"<< endl;
cin >> n;
 for (i=n; i >= 1; i = i - 1)
 {
     cout << salarios(i) << endl;
 }

}
double salarios (int n){
    double sal;
    double h;
    double ex;
    double totl;
    double real;
    
    cout<< "Ingrese las horas trabajadas por una persona"<< endl;
 cin >> h;
 cout << "Ingrese las horas extras realizadas" << endl;
 cin >> ex;
 totl= (h*1.75)+(ex*2.50);
 if(totl>=500){
     real=totl-((totl*0.04)+(totl*0.0625)+(totl*0.01));
 }
 else {
     real=totl-((totl*0.04)+(totl*0.0625));

 }

  cout << "El salario total es: " << totl<< endl;
  cout << "El Salario real es: " << real<< endl;

return 0;



