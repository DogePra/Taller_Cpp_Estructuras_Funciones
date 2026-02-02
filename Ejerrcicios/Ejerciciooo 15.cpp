#include <iostream>
using namespace std;

int main(){
    int a[15];
    int contP=0, contN=0;
    double sumP=0, sumN=0;

    for(int i=0;i<15;i++){
        cout<<"Ingrese numero "<<(i+1)<<": ";
        cin>>a[i];

        if(a[i]>0){ sumP+=a[i]; contP++; }
        else if(a[i]<0){ sumN+=a[i]; contN++; }
    }

    if(contP>0) cout<<"Promedio positivos: "<<(sumP/contP)<<endl;
    else cout<<"No hubo positivos"<<endl;

    if(contN>0) cout<<"Promedio negativos: "<<(sumN/contN)<<endl;
    else cout<<"No hubo negativos"<<endl;

    return 0;
}
