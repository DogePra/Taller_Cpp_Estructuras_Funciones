#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> e(10);
    double suma=0;

    for(int i=0;i<10;i++){
        cout<<"Edad "<<(i+1)<<": ";
        cin>>e[i];
        suma += e[i];
    }

    double prom = suma/10;
    int may=0, menIg=0;

    for(int i=0;i<10;i++){
        if(e[i]>prom) may++;
        else menIg++;
    }

    cout<<"Promedio: "<<prom<<endl;
    cout<<"Mayores al promedio: "<<may<<endl;
    cout<<"Menores o iguales al promedio: "<<menIg<<endl;
    return 0;
}
