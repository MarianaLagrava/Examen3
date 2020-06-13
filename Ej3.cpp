#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int ano (void);
int main (void) {
    
     cout<< "Determinar su un anio es bisiesto o no"<< endl;
     cout<< "Ingrese el anio"<< endl;
     
      ano ();
}


     int ano (void){
         int n;
         cin >> n;
if(n%400==0){
   cout<< "Es Bisiesto" << endl;
}
  else if ((n%4==0) && (n%100!=0)){
      cout << "Es bisiesto"<< endl;
  }
  else { 
      cout << "No es bisiesto"<< endl;
  }
  
 
  return 0;
     }
  

     