#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int anio (void);// declaracion funcion para el año
int main (void) {// declaracion de main
    
     cout<< "Determinar su un a"<<char(164)<<"o es bisiesto o no"<< endl;
     cout<< "Ingrese el a"<<char(164)<<"o" <<endl;// indicaciones para ingreso de datos
     
      anio (); // invocacion funcion anio
}


     int anio (void){ //funcion para determinar si es bisiesto o no
         int n;
         cin >> n;
if(n%400==0){// condicion uno para determinar si es bisiesto o no
   cout<< "Es Bisiesto" << endl;
}
  else if ((n%4==0) && (n%100!=0)){// condicion alterna en caso de que la anterior falle
      cout << "Es bisiesto"<< endl;
  }
  else { 
      cout << "No es bisiesto"<< endl;//intrucciones en caso de que no se cumpla ninguna condicion
  }
  
 
  return 0;
     }
  

    