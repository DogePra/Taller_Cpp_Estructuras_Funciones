#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<double> v(8);

    for(int i=0;i<8;i++){
        cout<<"Valor "<<(i+1)<<": ";
        cin>>v[i];
    }

    double mx=v[0], mn=v[0];
    for(int i=1;i<8;i++){
        if(v[i]>mx) mx=v[i];
        if(v[i]<mn) mn=v[i];
    }

    cout<<"Max: "<<mx<<endl;
    cout<<"Min: "<<mn<<endl;
    cout<<"Rango (max-min): "<<(mx-mn)<<endl;
    return 0;
}
