#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream archivo("matriz.txt");

    if (!archivo.is_open())
    {
        cerr << "Error al abrir el archivo." << endl;
        return 1;
    }

    int matriz[3][3];
    string a, b, c;
    int fila = 0;

    while (getline(archivo, a, ','))
    {
        getline(archivo, b, ','),
        getline(archivo, c),
        matriz[fila][0] = stoi(a);
        matriz[fila][1] = stoi(b);
        matriz[fila][2] = stoi(c);
        fila++;
    }

    archivo.close();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}