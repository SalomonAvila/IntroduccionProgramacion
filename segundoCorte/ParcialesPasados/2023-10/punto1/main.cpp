#include <iostream>

using namespace std;

void emparedado(int nTrozos, int trozos[])
{
    int total = 0;
    for (int i = 0; i < nTrozos; i++)
    {
        total += trozos[i];
    }

    int acumulado = 0;
    for (int i = 0; i < nTrozos; i++)
    {
        acumulado += trozos[i];
        int derecha = total - acumulado;

        if (trozos[i] == derecha)
        {
            cout << "SI " << i << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int nTrozos;
    cin >> nTrozos;
    int trozos[100];

    for (int i = 0; i < nTrozos; i++)
    {
        cin >> trozos[i];
    }
    emparedado(nTrozos, trozos);
}