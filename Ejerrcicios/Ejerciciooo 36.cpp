#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct Estudiante{
    string nombre;
    double n1,n2,n3;
};

double promedio(const Estudiante &e){
    return (e.n1 + e.n2 + e.n3)/3.0;
}

int main(){
    int n;
    vector<Estudiante> v;

    cout<<"Cuantos estudiantes? ";
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){
        Estudiante e;
        cout<<"Nombre: ";
        getline(cin,e.nombre);
        cout<<"Nota1: "; cin>>e.n1;
        cout<<"Nota2: "; cin>>e.n2;
        cout<<"Nota3: "; cin>>e.n3;
        cin.ignore();
        v.push_back(e);
    }

    ofstream out("estudiantes.txt");
    for(size_t i=0;i<v.size();i++){
        out<<v[i].nombre<<";"<<v[i].n1<<";"<<v[i].n2<<";"<<v[i].n3<<"\n";
    }
    out.close();

    vector<Estudiante> leidos;
    ifstream in("estudiantes.txt");
    string nom;
    double a,b,c;
    char sep;

    while(getline(in,nom,';')){
        in>>a; in>>sep;
        in>>b; in>>sep;
        in>>c;
        in.ignore();
        Estudiante e{nom,a,b,c};
        leidos.push_back(e);
    }
    in.close();

    cout<<"\nPromedios:\n";
    for(size_t i=0;i<leidos.size();i++){
        double p = promedio(leidos[i]);
        cout<<leidos[i].nombre<<" -> "<<p;
        if(p>=7) cout<<" (APRUEBA)\n";
        else cout<<" (REPRUEBA)\n";
    }

    string buscado;
    cout<<"\nBuscar estudiante: ";
    getline(cin,buscado);

    bool ok=false;
    for(size_t i=0;i<leidos.size();i++){
        if(leidos[i].nombre==buscado){
            double p=promedio(leidos[i]);
            cout<<"Notas: "<<leidos[i].n1<<", "<<leidos[i].n2<<", "<<leidos[i].n3<<endl;
            cout<<"Promedio: "<<p<<endl;
            cout<<(p>=7? "APRUEBA":"REPRUEBA")<<endl;
            ok=true;
        }
    }
    if(!ok) cout<<"No encontrado.\n";
    return 0;
}
