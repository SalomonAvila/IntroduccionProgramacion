#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Reproduccion{
    string nombre;
    int duracion;
    int cantidad;
};

struct Cancion{
    string artista;
    string nombre;
};

// Maximo arbitrario de registros (preguntar al profe en el parcial)
const int MAX = 100;

void generarResumen(){
    ifstream archivoReproducciones("reproducciones.txt");
    if(!archivoReproducciones.is_open()){
        cout << "No se puede abrir el archivo con las reproducciones" << endl;
        return;
    }

    ifstream archivoArtistas("artistas.txt");
    if(!archivoArtistas.is_open()){
        cout << "No se puede abrir el archivo que contiene los artistas" << endl;
        return;
    }

    Reproduccion reproducciones[MAX];
    Cancion canciones[MAX];

    // 1. Leer reproducciones: nombre duracion cantidad
    int nRep = 0;
    while(nRep < MAX && archivoReproducciones >> reproducciones[nRep].nombre >> reproducciones[nRep].duracion >> reproducciones[nRep].cantidad){
        nRep++;
    }
    archivoReproducciones.close();

    int nCan = 0;
    string artista, cancion;
    while(nCan < MAX && getline(archivoArtistas, artista, ',')){
        archivoArtistas >> ws;
        getline(archivoArtistas, cancion);  
        canciones[nCan].artista = artista;
        canciones[nCan].nombre = cancion;
        nCan++;
    }
    archivoArtistas.close();

    string artistas[MAX];
    int minutos[MAX];
    int nArt = 0;

    for(int i = 0; i < nCan; i++){
        int mins = 0;
        for(int j = 0; j < nRep; j++){
            if(reproducciones[j].nombre == canciones[i].nombre){
                mins = reproducciones[j].duracion * reproducciones[j].cantidad;
            }
        }

        int pos = -1;
        for(int k = 0; k < nArt; k++){
            if(artistas[k] == canciones[i].artista) pos = k;
        }

        if(pos == -1){
            artistas[nArt] = canciones[i].artista;
            minutos[nArt] = mins;
            nArt++;
        }else{
            minutos[pos] += mins;
        }
    }

    if(nArt == 0){
        cout << "No hay datos para generar el resumen" << endl;
        return;
    }

    int mayor = 0;
    for(int k = 1; k < nArt; k++){
        if(minutos[k] > minutos[mayor]) mayor = k;
    }

    ofstream resumen("resumen.txt");
    resumen << "Artista más escuchado: " << artistas[mayor] << endl;
    resumen << "Total minutos: " << minutos[mayor] << endl;
    resumen.close();
}

int main(){
    generarResumen();
    return 0;
}