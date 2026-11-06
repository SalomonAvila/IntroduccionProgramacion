#include <iostream>
using namespace std;

bool sobrevive(char matriz[][100], int m, int n, int fila, int col, int r)
{
    if (fila < 0 || fila >= m || col < 0 || col >= n)
        return false;

    int comida = 0, agua = 0;
    int fIni, fFin, cIni, cFin;

    if(fila-r >= 0){
        fIni = fila-r;
    }else{
        fIni = 0;
    }

    if(fila+r <= m-1){
        fFin = fila+r;
    }else{
        fFin = m-1;
    }

    if(col+r >= 0){
        cIni = col+r;
    }else{
        cIni = 0;
    }

    if(col-r <= n-1){
        cFin = col -r;
    }else{
        cFin = n-1;
    }

    for (int i = fIni; i <= fFin; i++)
    {
        for (int j = cIni; j <= cFin; j++)
        {
            if (matriz[i][j] == 'C')
                comida++;
            else if (matriz[i][j] == 'A')
                agua++;
        }
    }
    return comida >= 4 && agua * 2 >= comida;
}

int main()
{
    int m, n, fila, col, r;
    char corral[100][100];
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> corral[i][j];
    cin >> fila >> col >> r;

    if (sobrevive(corral, m, n, fila, col, r))
        cout << "La ovejita puede sobrevivir." << endl;
    else
        cout << "La ovejita no puede sobrevivir." << endl;
    return 0;
}