#include <iostream>
using namespace std;

int main(){
    double n[10];
    double suma=0;
    double mayor, menor;
    int apr=0, rep=0;

    for(int i=0;i<10;i++){
        cout<<"Nota final "<<(i+1)<<": ";
        cin>>n[i];
        suma += n[i];

        if(i==0){ mayor=n[i]; menor=n[i]; }
        if(n[i]>mayor) mayor=n[i];
        if(n[i]<menor) menor=n[i];

        if(n[i]>=7) apr++;
        else rep++;
    }

    double prom = suma/10;

    cout<<"\n--- RESUMEN ---\n";
    cout<<"Promedio: "<<prom<<endl;
    cout<<"Nota mas alta: "<<mayor<<endl;
    cout<<"Nota mas baja: "<<menor<<endl;
    cout<<"% Aprobados: "<<(apr*100.0/10)<<"%"<<endl;
    cout<<"% Reprobados: "<<(rep*100.0/10)<<"%"<<endl;
    return 0;
}
