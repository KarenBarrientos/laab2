#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int menu();
bool esPrimo(int );

int main(int argc, char* argv[]){
    string numero1="";
    int opcion,numero2,num=2;
    int resultado=0,suma=0,contador=0;
    int mayor=0;
    int contador2=-1;

    while ( (opcion = menu()) != 4){
        if (opcion == 1){

            cout<<"Ingrese numero: "<<endl;
            cin>>numero1;
            int arr[numero1.size()+1];

            for (int i = 0; i < numero1.size(); ++i){
                arr[i]=(int)numero1[i];
                arr[i]=arr[i]-48; 
            }

            for (int i = 0; i < numero1.size(); ++i){
                if (mayor<arr[i]){
                    mayor=arr[i];
                }
            }
            bool cierto=false;
            int base=0, cont=0;

            for (int i = 0; i <= mayor; ++i){
                for (int j = 0; j < numero1.size(); ++j){
                    if (arr[j]==i){
                        cierto=true;
                    }

                    if (cierto){
                        contador2++;
                    }

                }
            }

            for (int i = numero1.size()-1; i >= 0; --i){
                base += arr[cont] * pow(mayor+1,i);
                cont++;
            }

            if (contador2==mayor){
                cout<<"No es base pandigital"<<endl;
            }else{
                
                cout<<numero1<<" esta en base "<<mayor+1<<" y equivale a "<<base<<endl;
            }



        }//fin opcion1


        if (opcion == 2){
            cout<<"Ingrese numero: "<<endl;
            cin>>numero2;
            cout<<"Divisores: "<<endl;

            for (int i = 1; i <= numero2; ++i){
                if(numero2%i==0){
                    cout<<i<<" ";
                    resultado=resultado+((numero2+i)/i);

                }

                if(esPrimo(num)){
                    suma = suma + numero2;
                    contador++;
                }
                num++;
            
            } //fin for

            cout<<"Suma: "<<(suma/6)<<endl;



        } //fin opcion2

        if (opcion==3){
            cout<<"NO LO HICE XD :( "<<endl;
            
        }//fin opcion3

    } // fin while
           
}



int menu(){
    cout<<endl;
    cout <<"***** MENU ***** "<< endl 
         <<"1. Ejercicio1" << endl
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

bool esPrimo(int n){
    int i;
    if(n == 2)
        return true;
    if(n%2 == 0 || n==1 )
        return false;
    for(i=2; i<=n/2; i++){
        if(n%i == 0)
            return false;
    }
    return true;
}
