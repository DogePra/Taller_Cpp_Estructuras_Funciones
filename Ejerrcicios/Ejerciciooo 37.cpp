#include <iostream>
#include <vector>
using namespace std;

void llenar(vector<int> &v){
    for(size_t i=0;i<v.size();i++){
        cout<<"Valor "<<(i+1)<<": ";
        cin>>v[i];
    }
}

int suma(const vector<int> &v){
    int s=0;
    for(size_t i=0;i<v.size();i++) s+=v[i];
    return s;
}

double promedio(const vector<int> &v){
    if(v.empty()) return 0;
    return (double)suma(v)/v.size();
}

int mayor(const vector<int> &v){
    int mx=v[0];
    for(size_t i=1;i<v.size();i++) if(v[i]>mx) mx=v[i];
    return mx;
}

int menor(const vector<int> &v){
    int mn=v[0];
    for(size_t i=1;i<v.size();i++) if(v[i]<mn) mn=v[i];
    return mn;
}

int main(){
    int n;
    cout<<"Tamanio del vector: ";
    cin>>n;

    vector<int> v(n);
    llenar(v);

    cout<<"Suma: "<<suma(v)<<endl;
    cout<<"Promedio: "<<promedio(v)<<endl;
    cout<<"Mayor: "<<mayor(v)<<endl;
    cout<<"Menor: "<<menor(v)<<endl;
    return 0;
}
