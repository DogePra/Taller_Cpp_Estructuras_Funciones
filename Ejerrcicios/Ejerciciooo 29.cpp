#include <iostream>
using namespace std;

int main(){
    int m[3][3];
    int total=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"m["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];
        }
    }

    for(int i=0;i<3;i++){
        int sumFila=0;
        for(int j=0;j<3;j++){
            sumFila += m[i][j];
            total += m[i][j];
        }
        cout<<"Suma fila "<<i<<": "<<sumFila<<endl;
    }

    cout<<"Suma total: "<<total<<endl;
    return 0;
}
