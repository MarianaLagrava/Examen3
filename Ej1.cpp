#include <iostream>
#include <string>
#include <cmath>
using namespace std;
double salarios(int n); //declaracion de la funcion
int main (void) { 
    double sal; //declaracion de variables
    double h;
    double ex;
    int n;
    int i;
     
cout << "CALCULO DE SALARIOS "<< endl; //titulo del programa
cout << "Ingrese el numero de trabajadores a calcular"<< endl;
cin >> n;
 for (i=n; i >= 1; i = i - 1)
 {
     cout << salarios(i) << endl;// invocacion de la funcion salarios
 }

}
double salarios (int n){ // funcion
    double sal; //declaracion dentro de las funciones
    double h;
    double ex;
    double totl;
    double real;
    
    cout<< "Ingrese las horas trabajadas por la persona "<< n << endl; //ingreso de datos
 cin >> h;
 cout << "Ingrese las horas extras realizadas por la persona " << n << endl;
 cin >> ex;
 totl= (h*1.75)+(ex*2.50);  //calculo de salario total
 if(totl>=500){//condicion para descuento de iva en salario real
     real=totl-((totl*0.04)+(totl*0.0625)+(totl*0.01)); //salario real arriba de 500 
 }
 else {
     real=totl-((totl*0.04)+(totl*0.0625));//salario real abajo de 500

 }

  cout << "El salario total es: " << totl<< " USD " << endl;

  cout << "El Salario real es: " << real<< " USD "<< endl;

return 0;
}



