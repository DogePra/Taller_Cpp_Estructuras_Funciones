#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> v(10);
    double suma=0;

    for(int i=0;i<10;i++){
        cout<<"Ingrese numero "<<(i+1)<<": ";
        cin>>v[i];
        suma += v[i];
    }

    double prom = suma/10;
    int arriba=0;

    for(int i=0;i<10;i++){
        if(v[i]>prom) arriba++;
    }

    cout<<"Suma total: "<<suma<<endl;
    cout<<"Promedio: "<<prom<<endl;
    cout<<"Cantidad arriba del promedio: "<<arriba<<endl;
    return 0;
}
