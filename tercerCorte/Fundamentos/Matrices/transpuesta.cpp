#include <iostream>

using namespace std;

int main(){

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout<<"\nImpresion\n";
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nImpresion de parte inferior\n";

    for(int i = 0; i<3; i++){
        for(int j = 0; j<i+1; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

    //Ush pero entonces, como transpongo esta matriz?
    //Es sencillo :)


    cout<<"\nTranspuesta\n";

    for(int i = 0; i<3; i++){
        for(int j = 0; j<i+1; j++){
            int temp = matriz[j][i];
            matriz[j][i] = matriz[i][j];
            matriz[i][j] = temp;
        }
    }

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }

}