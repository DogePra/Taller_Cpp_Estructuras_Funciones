#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(){
    vector<double> v(12);
    double sumP=0, sumN=0, absTotal=0;

    for(int i=0;i<12;i++){
        cout<<"Valor "<<(i+1)<<": ";
        cin>>v[i];

        if(v[i]>0) sumP += v[i];
        else if(v[i]<0) sumN += v[i];

        absTotal += fabs(v[i]);
    }

    cout<<"Suma positivos: "<<sumP<<endl;
    cout<<"Suma negativos: "<<sumN<<endl;
    cout<<"Valor absoluto total acumulado: "<<absTotal<<endl;
    return 0;
}
