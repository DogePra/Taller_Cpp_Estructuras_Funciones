#include <iostream>
using namespace std;

int main(){
    double s[10];
    double suma=0;

    for(int i=0;i<10;i++){
        cout<<"Sueldo "<<(i+1)<<": ";
        cin>>s[i];
        suma += s[i];
    }

    double prom = suma/10;
    int arriba=0, abajo=0;

    for(int i=0;i<10;i++){
        if(s[i]>prom) arriba++;
        else if(s[i]<prom) abajo++;
    }

    cout<<"Sueldo promedio: "<<prom<<endl;
    cout<<"Por encima: "<<arriba<<endl;
    cout<<"Por debajo: "<<abajo<<endl;
    return 0;
}
