#include <iostream>

using namespace std;

//Nuevamente fijo una cantidad maxima de peldaños de la escalera
int peldanos[100];

string informar(int peldanos[], int c, int m, int n, int base);

int main(){
    
    int c,m,n,base;
    cin>>c;
    cin>>m;
    cin>>n;
    cin>>base;
    for(int i = 0; i<n; i++){
        cin>>peldanos[i];
    }
    cout<<informar(peldanos,c,m,n,base);
    return 0;

}

string informar(int peldanos[], int c, int m, int n, int base){

    int minimo = peldanos[0]-base;
    int maximo = peldanos[0]-base;

    for(int i = 1; i<n; i++){
        if(peldanos[i]-base < minimo) minimo=peldanos[i]-base;
        if(peldanos[i]-base > maximo) maximo=peldanos[i]-base;
        if((peldanos[i]-base)-(peldanos[i-1]-base)>c) return "Tropiezo";
    }
    if(maximo-minimo > m){
        return "Tropiezo";
    }else{
        return "Ok";
    }
    
}