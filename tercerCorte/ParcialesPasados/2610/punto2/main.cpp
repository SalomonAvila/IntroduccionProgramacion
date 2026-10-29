#include <iostream>
#include <string>
using namespace std;

// Imprime un numero con dos digitos (5 -> 05)
void imprimirDosDigitos(int x) {
    if (x < 10) {
        cout << "0";
    }
    cout << x;
}

// Imprime segundos en formato h:mm:ss (3725 -> 1:02:05)
void imprimirTiempo(int segundos) {
    int horas = segundos / 3600;
    int minutos = (segundos % 3600) / 60;
    int segs = segundos % 60;
    cout << horas << ":";
    imprimirDosDigitos(minutos);
    cout << ":";
    imprimirDosDigitos(segs);
}

void imprimirClasificacion(string nombres[], int primera[], int segunda[], int n) {
    int total[100];
    int orden[100]; // indices de los corredores, se ordenan por tiempo total

    for (int i = 0; i < n; i++) {
        total[i] = primera[i] + segunda[i];
        orden[i] = i;
    }

    // Burbuja: solo intercambia si es ESTRICTAMENTE mayor (>),
    // asi los empates conservan el orden original de los arreglos.
    for (int pasada = 0; pasada < n - 1; pasada++) {
        for (int j = 0; j < n - 1 - pasada; j++) {
            if (total[orden[j]] > total[orden[j + 1]]) {
                int temp = orden[j];
                orden[j] = orden[j + 1];
                orden[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        int c = orden[i];
        cout << i + 1 << ". " << nombres[c] << ": ";
        imprimirTiempo(total[c]);
        if (segunda[c] < primera[c]) { // split negativo
            cout << " *";
        }
        cout << endl;
    }
}

int main() {
    // Ejemplo 1
    string nombres1[4] = {"Nicolas", "Bruno", "Santiago", "Maria Jose"};
    int primera1[4] = {3500, 3600, 3450, 3700};
    int segunda1[4] = {3400, 3700, 3500, 3550};
    cout << "Ejemplo 1:" << endl;
    imprimirClasificacion(nombres1, primera1, segunda1, 4);

    // Ejemplo 2
    string nombres2[3] = {"Maria Jose", "Bruno", "Santiago"};
    int primera2[3] = {1800, 1805, 2400};
    int segunda2[3] = {1800, 1795, 2409};
    cout << endl << "Ejemplo 2:" << endl;
    imprimirClasificacion(nombres2, primera2, segunda2, 3);

    return 0;
}