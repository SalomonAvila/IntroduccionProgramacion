#include <iostream>

using namespace std;



int main(){


    int arreglo[10];
    cout<<"Ingrese una cantidad de datos menor o igual a 10"<<endl;
    int numeroDeDatos; cin>>numeroDeDatos;
    
    if(numeroDeDatos > 10){
        cout<<"Cantidad invalida, vuelva a ingresar: ";
        cin>>numeroDeDatos;
    }

    for(int i = 0; i<numeroDeDatos; i++){
        cout<<"Ingrese el dato en la posicion "<<i<<": ";
        cin>>arreglo[i];
    }

    cout<<"Sin ordenar: "<<endl;
    for(int i = 0; i<numeroDeDatos; i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i<numeroDeDatos; i++){
        for(int j = i+1; j<numeroDeDatos; j++){
            if(arreglo[j]<arreglo[i]){
                int temporal = arreglo[j];
                arreglo[j] = arreglo[i];
                arreglo[i] = temporal;
            }
        }
    }

    cout<<"Ordenado: "<<endl;
    for(int i = 0; i<numeroDeDatos; i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;

    return 0;
}