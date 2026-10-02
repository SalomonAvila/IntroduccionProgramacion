#include <iostream>
using namespace std;

string jugadores[10];
int partidas[200];
int cantidadJugadores;
int cantidadPartidas;

void capturarDatos() {
  cin >> cantidadJugadores;
  for (int i = 0; i < cantidadJugadores; i++) {
    cin >> jugadores[i];
  }

  cin >> cantidadPartidas;
  for (int i = 0; i < cantidadPartidas * 2; i += 2) {
    cin >> partidas[i];
    cin >> partidas[i + 1];
  }
}

void imprimirResultados(string nombres[], int datos[], int nJugadores, int nPartidas) {
  int resultados[10];
  string nombresOrdenados[10];

  for (int i = 0; i < 10; i++) {
    resultados[i] = 0;
  }
  for (int i = 0; i < nJugadores; i++) {
    nombresOrdenados[i] = nombres[i];
  }

  for (int i = 0; i < nPartidas * 2; i += 2) {
    resultados[datos[i]] += datos[i + 1];
  }

  for (int i = 0; i < nJugadores; i++) {
    for (int j = i + 1; j < nJugadores; j++) {
      if (resultados[j] > resultados[i]) {
        int tmpNum = resultados[i];
        resultados[i] = resultados[j];
        resultados[j] = tmpNum;

        string tmpNom = nombresOrdenados[i];
        nombresOrdenados[i] = nombresOrdenados[j];
        nombresOrdenados[j] = tmpNom;
      }
    }
  }

  for (int i = 0; i < nJugadores; i++) {
    if(i == 3) break;
    cout << nombresOrdenados[i] << ": " << resultados[i] << endl;
  }
}

int main() {
  capturarDatos();
  imprimirResultados(jugadores, partidas, cantidadJugadores, cantidadPartidas);
  return 0;
}