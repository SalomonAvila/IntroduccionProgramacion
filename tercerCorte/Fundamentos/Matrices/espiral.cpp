#include <iostream>

using namespace std;

const int MAX = 20;


void llenarEspiral(int matriz[MAX][MAX], int n)
{
    int numero = 1;
    matriz[0][0] = numero;
    numero++;

    for (int k = 1; k < n; k++)
    {
        if (k % 2 == 1)
        {
            for (int i = 0; i <= k; i++)
            {
                matriz[i][k] = numero;
                numero++;
            }
            for (int j = k - 1; j >= 0; j--)
            {
                matriz[k][j] = numero;
                numero++;
            }
        }
        else
        {
            for (int j = 0; j <= k; j++)
            {
                matriz[k][j] = numero;
                numero++;
            }
            for (int i = k - 1; i >= 0; i--)
            {
                matriz[i][k] = numero;
                numero++;
            }
        }
    }
}

void imprimirMatriz(int matriz[MAX][MAX], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Tamano de la matriz: ";
    cin >> n;

    if (n < 1 || n > MAX)
    {
        cout << "El tamano debe estar entre 1 y " << MAX << endl;
        return 1;
    }

    int matriz[MAX][MAX];
    llenarEspiral(matriz, n);
    imprimirMatriz(matriz, n);

    return 0;
}
