#include <iostream>
#include <vector>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
};

int main(){
    vector<Cliente> v;
    int n;

    cout<<"Cuantos clientes? ";
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        Cliente c;
        cout<<"Nombre: ";
        getline(cin,c.nombre);
        cout<<"Edad: ";
        cin>>c.edad;
        cin.ignore();
        v.push_back(c);
    }

    cout<<"\n--- LISTA ---\n";
    for(size_t i=0;i<v.size();i++){
        cout<<v[i].nombre<<" - "<<v[i].edad<<endl;
    }
    return 0;
}
