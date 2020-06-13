#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
using namespace std;

int juego (void);
int main (void){
    int n; 

cout<< "PRUEBA TU SUERTE!"<< endl;
juego ();
return 0;
}

int juego (void){
    int s, l;
    int ale;
srand(time(NULL));
ale= 1+rand()%(1-101);

cout<< "Ingrese un numero entre el 1 y 100, tiene 5 intentos. Ingrese 0 para salir. "<< endl;

for (l = 1; l <= 5; l = l + 1){
    cout<< endl;
    cin >> s;
    if(s==0){
        l+=10;
    
     }
    
    else if (s<ale){
cout << "El numero es menor al elegido y te quedan "<< 5-l << " intentos."<<endl;
    }
    
    else if (s>ale) {
    cout << "El numero es mayor al elegido y te quedan "<< 5-l << " intentos."<< endl;
    }
    else if (s==ale){
        cout << "FELICIDADES! HA GANADO!"<<endl;
        l+=10;
    }
   
    
    

    }
    

cout << "El numero era: "<< ale<< endl;
}
 


 
    



