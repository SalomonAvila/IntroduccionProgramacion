#include <iostream>

using namespace std;

//Aca ponemos un maximo arbitrario, puede ser mas o no
bool sobrevive(char matriz[][100], int m, int n, int posx, int posy, int r){
    //Revisamos la posicion de la oveja
    if(posx > n || posy > m){
        cout<<"No es valida la posicion de la oveja"<<endl;
        return false;
    }else{
        int comida = 0, agua = 0;
        //Evaluamos los limites del radio
        int limiteXI = max((posx-r),0);
        int limiteXD = min((posx+r),n);
        int limiteYAR = max((posy-r),0);
        int limiteYAB = min((posy+r),m);

        for(int i = limiteYAR; i<limiteYAB; i++){
            for(int j = limiteXI; j<limiteXD; j++){
                if(matriz[i][j] == 'C') comida++;
                if(matriz[i][j] == 'A') agua++;
            }
        }

        if(comida <4){
            cout<<"No hay suficientes unidades de comida";
            return false;
        }else{
            if(agua < comida/2){
                cout<<"No hay suficiente unidades de agua";
                return false;
            }else{
                return true;
            }
        }
    }
}

int main(){
    int n,m,posx,posy,r; cin>>m>>n>>posx>>posy>>r;
    char corral[m][n];
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            cin>>corral[i][m];
        }
    }




    return 0;

}