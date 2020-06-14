#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int anio (void);// declaracion funcion para el año
int main (void) {// declaracion de main
    
     cout<< "Determinar su un anio es bisiesto o no"<< endl;
     cout<< "Ingrese el anio"<< endl;// indicaciones para ingreso de datos
     
      anio (); // invocacion funcion ano
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
  

     