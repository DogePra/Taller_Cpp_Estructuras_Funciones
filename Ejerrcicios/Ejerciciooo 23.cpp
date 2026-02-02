#include <iostream>
using namespace std;

int main(){
    double p[10];
    double subtotal=0;

    for(int i=0;i<10;i++){
        cout<<"Precio "<<(i+1)<<": ";
        cin>>p[i];
        subtotal += p[i];
    }

    double iva = subtotal*0.12;
    double total = subtotal + iva;

    cout<<"Subtotal: "<<subtotal<<endl;
    cout<<"IVA (12%): "<<iva<<endl;
    cout<<"Total a pagar: "<<total<<endl;
    return 0;
}
