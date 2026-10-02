#include <iostream>

using namespace std;


int main(){

    /*

        Si yo necesito trabajar con varias variables, corro con un problema muy importa
        Que pasa si hago mas y no las uso?
        Que pasa si hago menos y no las uso?
        Esto se soluciona con un arreglo
    

    */

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

    for(int i = 0; i<numeroDeDatos; i++){
        cout<<arreglo[i]<<" ";
    }

    return 0;
}