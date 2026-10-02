#include <iostream>

using namespace std;




int main(){

    string jugadores[10];
    int partidas[200];

    int cantidadJugadores; cin>>cantidadJugadores;
    
    if(cantidadJugadores > 10){
        cout<<"Cantidad invalida, vuelva a ingresar: ";
        cin>>cantidadJugadores;
    }

    for(int i = 0; i<cantidadJugadores; i++){
        cout<<"Ingrese el nombre en la posicion "<<i<<": ";
        cin>>jugadores[i];
    }

    int cantidadPartidas; cin>>cantidadPartidas;

    if(cantidadPartidas > 10){
        cout<<"Cantidad invalida, vuelva a ingresar: ";
        cin>>cantidadPartidas;
    }

    for(int i = 0; i<cantidadPartidas*2; i++){
        cout<<"Ingrese el id en la posicion "<<i<<": ";
        cin>>partidas[i];
        cout<<"Ingrese el puntaje ";
        i++;
        cin>>partidas[i];
    }

    int resultados[10];

    for(int i = 0; i<10; i++){
        resultados[i] = 0;
    }

    for(int i = 0; i<cantidadPartidas*2; i+=2){
        resultados[partidas[i]] += partidas[i+1];
    }

    for(int i = 0; i<cantidadJugadores; i++){
        for(int j = i+1; j<cantidadJugadores; j++){
            if(resultados[j]>resultados[i]){
                string temporalNombre = jugadores[j];
                int temporalNumero = resultados[j];
                resultados[j] = resultados[i];
                jugadores[j] = jugadores[i];
                resultados[i] = temporalNumero;
                jugadores[i] = temporalNombre;
            }
        }
    }
    for(int i = 0; i<cantidadJugadores; i++){
        if(i == 3) break;
        cout<<jugadores[i]<<": "<<resultados[i]<<endl;
    }


}