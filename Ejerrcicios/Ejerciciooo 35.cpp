#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
    double consumoMensual;
};

int main(){
    int n;
    vector<Cliente> v;

    cout<<"Cuantos clientes? ";
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        Cliente c;
        cout<<"Nombre: ";
        getline(cin,c.nombre);
        cout<<"Edad: ";
        cin>>c.edad;
        cout<<"Consumo mensual: ";
        cin>>c.consumoMensual;
        cin.ignore();
        v.push_back(c);
    }

    ofstream out("consumos.txt");
    for(size_t i=0;i<v.size();i++){
        out<<v[i].nombre<<";"<<v[i].edad<<";"<<v[i].consumoMensual<<"\n";
    }
    out.close();

    vector<Cliente> leidos;
    ifstream in("consumos.txt");
    string nom;
    int edad;
    double cons;
    char c1,c2;

    while(getline(in,nom,';')){
        in>>edad; in>>c1;
        in>>cons;
        in.ignore();
        Cliente x;
        x.nombre=nom; x.edad=edad; x.consumoMensual=cons;
        leidos.push_back(x);
    }
    in.close();

    double total=0;
    int posMayor=0;
    for(size_t i=0;i<leidos.size();i++){
        total += leidos[i].consumoMensual;
        if(leidos[i].consumoMensual > leidos[posMayor].consumoMensual) posMayor=i;
    }
    double prom = (leidos.size()>0)? total/leidos.size() : 0;

    cout<<"Consumo total: "<<total<<endl;
    cout<<"Consumo promedio: "<<prom<<endl;
    if(leidos.size()>0){
        cout<<"Mayor consumo: "<<leidos[posMayor].nombre<<" -> "<<leidos[posMayor].consumoMensual<<endl;
    }
    return 0;
}
