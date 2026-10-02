//REPASO GENERAL
//Incluimos la libreria de iostream
#include <iostream>
using namespace std;



/*

Una funcion, es un fragmento de codigo que repite cierto procedimiento

*/

int sumaConRetorno(int a, int b){
    int suma;
    suma = a+b;
    return suma; 
}

void sumaSinRetorno(int a, int b){
    int suma;
    suma = a+b;
    cout<<"\nEl resultado de sumar "<<a<<" con "<<b<<" es: "<<suma<<endl;
}


int main(){
    int a = 0;
    int b = 0;
    cout<<"Ingrese su primer numero: ";
    cin>>a;
    cout<<"Ingrese su segundo numero: ";
    cin>>b;
    //Asignar variable
    int suma = sumaConRetorno(a,b);
    cout<<"\nEl resultado de sumar "<<a<<" con "<<b<<" es: "<<suma<<endl;
    
    //Alternativamente
    sumaSinRetorno(a,b);
    return 0;
}