#include <iostream>
using namespace std;

int main(){
    float n[10];
    float suma=0;
    int apr=0, rep=0;

    for(int i=0;i<10;i++){
        do{
            cout<<"Nota "<<(i+1)<<" (0-10): ";
            cin>>n[i];
        }while(n[i]<0 || n[i]>10);

        suma += n[i];
        if(n[i]>=7) apr++;
        else rep++;
    }

    cout<<"Promedio general: "<<(suma/10)<<endl;
    cout<<"Aprobaron: "<<apr<<endl;
    cout<<"Reprobaron: "<<rep<<endl;
    return 0;
}
