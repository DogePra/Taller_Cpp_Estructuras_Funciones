#include <iostream>
#include <vector>
using namespace std;

int suma(vector<int> v){
    int s=0;
    for(size_t i=0;i<v.size();i++) s+=v[i];
    return s;
}

double promedio(vector<int> v){
    if(v.empty()) return 0;
    return (double)suma(v)/v.size();
}

int contarPares(vector<int> v){
    int c=0;
    for(size_t i=0;i<v.size();i++) if(v[i]%2==0) c++;
    return c;
}

int contarImpares(vector<int> v){
    int c=0;
    for(size_t i=0;i<v.size();i++) if(v[i]%2!=0) c++;
    return c;
}

int main(){
    int n;
    cout<<"Tamanio: ";
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cout<<"Valor "<<(i+1)<<": ";
        cin>>v[i];
    }

    cout<<"Suma: "<<suma(v)<<endl;
    cout<<"Promedio: "<<promedio(v)<<endl;
    cout<<"Pares: "<<contarPares(v)<<endl;
    cout<<"Impares: "<<contarImpares(v)<<endl;
    return 0;
}
