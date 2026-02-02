#include <iostream>
using namespace std;

int main(){
    int a[12];
    int sumP=0, sumI=0;

    for(int i=0;i<12;i++){
        cout<<"Ingrese numero "<<(i+1)<<": ";
        cin>>a[i];
        if(a[i]%2==0) sumP += a[i];
        else sumI += a[i];
    }

    cout<<"Suma pares: "<<sumP<<endl;
    cout<<"Suma impares: "<<sumI<<endl;

    if(sumP>sumI) cout<<"La suma mayor es la de PARES"<<endl;
    else if(sumI>sumP) cout<<"La suma mayor es la de IMPARES"<<endl;
    else cout<<"Son iguales"<<endl;

    return 0;
}
