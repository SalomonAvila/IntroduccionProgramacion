#include <iostream>
using namespace std;

int sumaCubos(int n)
{
    int suma = 0;
    while (n > 0)
    {
        int digito = n % 10;
        suma += digito * digito * digito;
        n = n / 10;
    }
    return suma;
}

bool buscar(int n, int valores[], int tam)
{
    for (int i = 0; i < tam; i++)
    {
        if (valores[i] == n)
        {
            return true;
        }
    }
    return false;
}

bool esCubifinito(int n, int valores[])
{
    int tam = 0;
    valores[0] = n;
    tam++;
    cout << n;

    int actual = n;
    while (actual != 1)
    {
        int siguiente = sumaCubos(actual);
        cout << " - " << siguiente;

        if (siguiente == 1)
        {
            return true;
        }
        if (buscar(siguiente, valores, tam))
        {
            return false;
        }

        valores[tam] = siguiente;
        tam++;
        actual = siguiente;
    }
    return true;
}

int main()
{
    int n;
    int valores[1000];

    cin >> n;
    while (n != 0)
    {
        bool resultado = esCubifinito(n, valores);
        if (resultado)
        {
            cout << " -> cubifinito" << endl;
        }
        else
        {
            cout << " -> no cubifinito" << endl;
        }
        cin >> n;
    }
    return 0;
}