#include <iostream>

using namespace std;

bool numeros[1000];
int primos[500];

int criba(bool numeros[]);


int main(){
    for(int i = 0; i < 1000; i++) numeros[i] = true;
    cout<<criba(numeros)<<" numeros primos desde 1 hasta 1000";
}

int criba(bool numeros[]){
    int contador = 0;
    for(int i = 2; i<1000; i++){
        //cout<<numeros[i]<<endl;
        if(numeros[i] == true){
            primos[contador] = i;
            contador++;
            int objetivo = i*2;
            for(int j = i*2; j<1000; j+=i){
                numeros[j] = false;
            }
        }
    }
    
    for(int i = 0; i<contador; i++){
        cout<<primos[i]<<" ";
    }
    cout<<endl;
    return contador;
}