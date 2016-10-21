#include <iostream>
#include <math.h>
using namespace std;

int menu();

int main(int argc, char* argv[]){

    int opcion,numero;
    int resultado=0;

    while ( (opcion = menu()) != 4){
        if (opcion == 1){


        }//fin opcion1


        if (opcion == 2){
            cout<<"Ingrese numero: "<<endl;
            cin>>numero;
            cout<<"Divisores: "<<endl;
            for (int i = 1; i <= numero; ++i){
                if(numero%i==0){
                    cout<<i<<" ";
                    resultado=resultado+((numero+i)/i);

                }

            }

            cout<<"Suma: "<<resultado<<endl;



        } //fin opcion2

        if (opcion==3){
            
        }//fin opcion3

    } // fin while
           
}



int menu(){
    cout << "1. Ejercicio1" << endl
         << "2. Ejercicio2" << endl
         << "3. Ejercicio3" << endl
         << "4. Salir" << endl;
    int opcion;
    do{
        cin >> opcion;
        if (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4)
            cerr << "Introduzca un valor correcto" << endl;
    }while (opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4);

    return opcion;
}
