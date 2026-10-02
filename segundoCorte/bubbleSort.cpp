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

    for(int i = 0; i<n; i++){
        cout<<"Ingrese el dato en la posicion "<<i<<": ";
        cin>>arreglo[i];
    }

    

    return 0;
}