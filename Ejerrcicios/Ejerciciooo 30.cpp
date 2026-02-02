#include <iostream>
using namespace std;

int main(){
    int m[2][4];

    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            cout<<"m["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];
        }
    }

    int mayor=m[0][0], fi=0, co=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<4;j++){
            if(m[i][j]>mayor){
                mayor=m[i][j];
                fi=i; co=j;
            }
        }
    }

    cout<<"Mayor: "<<mayor<<endl;
    cout<<"Posicion: fila "<<fi<<", columna "<<co<<endl;
    return 0;
}
