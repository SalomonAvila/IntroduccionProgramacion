#include <iostream>
using namespace std;

// Calcula F(k): rota nums k posiciones en sentido horario (a la derecha)
// y suma i * arrk[i]. No hace falta construir arrk: el elemento que queda
// en la posicion i despues de rotar k veces es nums[(i - k + n) % n].
int calcularF(int nums[], int n, int k)
{
    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        int pos = (i - k + n) % n;
        suma = suma + i * nums[pos];
    }
    return suma;
}

// Devuelve el maximo entre F(0), F(1), ..., F(n-1)
int maximo(int nums[], int n)
{
    int mayor = calcularF(nums, n, 0);
    for (int k = 1; k < n; k++)
    {
        int f = calcularF(nums, n, k);
        if (f > mayor)
        {
            mayor = f;
        }
    }
    return mayor;
}

int main()
{
    int n;
    int nums[100];

    cout << "Ingrese n: ";
    cin >> n;
    cout << "Ingrese los " << n << " numeros: ";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Salida: " << maximo(nums, n) << endl;
    return 0;
}