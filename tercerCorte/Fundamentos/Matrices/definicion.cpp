#include <iostream>

using namespace std;


int main(){
    //Una matriz es un Arreglo 2D  :o
    //Se definen como tipoDato nombreMatriz[filas][columnas];
    int matriz[3][3];

    //Llenemos la matriz
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cin>>matriz[i][j];
        }
    }

    Ahora imprimamosla
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }



}