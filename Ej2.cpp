#include <iostream>
#include <string>
#include <cmath>
#include <time.h>
using namespace std;

int juego (void);// declaracion de funcion
int main (void){
    int n; // declaracion de variables en main

cout<< "PRUEBA TU SUERTE!"<< endl;
juego ();// invocacion a la funcion
return 0;
}
int juego (void){ // Funcion juego
    int s, l;// Declaracion variables en la funcion
    int ale;
srand(time(NULL));// Se elige numero aleatorio al iniciar el programa
ale= 1+rand()%(1-101);

cout<< "Ingrese un numero entre el 1 y 100, tiene 5 intentos. Ingrese 0 para salir. "<< endl;
//instrucciones

for (l = 1; l <= 5; l = l + 1){ // conteo de 5 veces
    cout<< endl;
    cin >> s;
    if(s==0){// condicion para salir del juego
        l+=10;
    
     }
    
    else if (s<ale){// condicion en caso de que el numero introducido sea menor al aleatorio
cout << "El numero es menor al elegido y te quedan "<< 5-l << " intentos."<<endl;
//Se muestran los intentos restantes
    }
    
    else if (s>ale) { //condicion en caso de que el numero introducido sea mayor al aleatorio
    cout << "El numero es mayor al elegido y te quedan "<< 5-l << " intentos."<< endl;
    }// se muestran los intentos restantes
    else if (s==ale){// condicion para ganar
        cout << "FELICIDADES! HA GANADO!"<<endl;
        l+=10; //se detiene el programa al ganar
    }
    }
cout << "El numero era: "<< ale<< endl;
}
 


 
    



