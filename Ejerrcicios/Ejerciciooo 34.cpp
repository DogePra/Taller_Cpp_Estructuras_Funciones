#include <iostream>
#include <vector>
#include <fstream>
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

    ofstream out("clientes.txt");
    for(size_t i=0;i<v.size();i++){
        out<<v[i].nombre<<";"<<v[i].edad<<"\n";
    }
    out.close();

    string buscado;
    cout<<"\nBuscar nombre: ";
    getline(cin,buscado);

    ifstream in("clientes.txt");
    string nom;
    int edad;
    char sep;
    bool encontrado=false;

    while(getline(in,nom,';')){
        in>>edad;
        in.ignore(); // \n
        if(nom==buscado){
            cout<<"Encontrado: "<<nom<<" - "<<edad<<endl;
            encontrado=true;
            break;
        }
    }
    in.close();

    if(!encontrado) cout<<"No esta registrado.\n";
    return 0;
}
