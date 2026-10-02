#include <iostream>
using namespace std;

//Supongamos que maximo puedo tener 100 datos
int saltos[100];

int capacidadMinima(int saltos[], int nSaltos);

int main(){

    int nSaltos; cin>>nSaltos;
    for(int i = 0; i<nSaltos; i++){
        cin>>saltos[i];
    }
    cout<<"Salto minimo es: "<<capacidadMinima(saltos,nSaltos);
}


int capacidadMinima(int saltos[], int nSaltos){
    int minimo = saltos[0];
    for(int i = 1; i<nSaltos; i++){
        if(saltos[i]-saltos[i-1] > minimo){
            minimo = saltos[i]-saltos[i-1];
        }else if(saltos[i]-saltos[i-1] == minimo){
            minimo++;
        }
    }
    return minimo;
}