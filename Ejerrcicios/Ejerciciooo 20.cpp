#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> v(10);
    vector<double> cuad(10);
    double sumaC=0;

    for(int i=0;i<10;i++){
        cout<<"Numero "<<(i+1)<<": ";
        cin>>v[i];
        cuad[i] = v[i]*v[i];
        sumaC += cuad[i];
    }

    cout<<"Cuadrados:"<<endl;
    for(int i=0;i<10;i++){
        cout<<v[i]<<"^2 = "<<cuad[i]<<endl;
    }

    cout<<"Suma cuadrados: "<<sumaC<<endl;
    cout<<"Promedio cuadrados: "<<(sumaC/10)<<endl;
    return 0;
}
