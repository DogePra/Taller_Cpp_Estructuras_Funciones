#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void ingresar(vector<double> &v){
    int n;
    cout<<"Cuantas calificaciones? ";
    cin>>n;
    v.resize(n);

    for(int i=0;i<n;i++){
        cout<<"Nota "<<(i+1)<<": ";
        cin>>v[i];
    }
}

void guardarArchivo(const vector<double> &v){
    ofstream out("calificaciones.txt");
    for(size_t i=0;i<v.size();i++) out<<v[i]<<"\n";
    out.close();
}

vector<double> leerArchivo(){
    vector<double> v;
    ifstream in("calificaciones.txt");
    double x;
    while(in>>x) v.push_back(x);
    in.close();
    return v;
}

double total(const vector<double> &v){
    double s=0;
    for(size_t i=0;i<v.size();i++) s+=v[i];
    return s;
}

int main(){
    vector<double> v;
    ingresar(v);
    guardarArchivo(v);

    vector<double> datos = leerArchivo();

    double t = total(datos);
    double prom = (datos.size()>0)? t/datos.size() : 0;

    int arriba=0, abajo=0;
    for(size_t i=0;i<datos.size();i++){
        if(datos[i]>prom) arriba++;
        else if(datos[i]<prom) abajo++;
    }

    cout<<"Total: "<<t<<endl;
    cout<<"Promedio: "<<prom<<endl;
    cout<<"Arriba del promedio: "<<arriba<<endl;
    cout<<"Debajo del promedio: "<<abajo<<endl;
    return 0;
}
