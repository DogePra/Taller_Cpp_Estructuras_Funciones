#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void ingresarVentas(vector<double> &v){
    int n;
    cout<<"Cuantas ventas? ";
    cin>>n;
    v.resize(n);

    for(int i=0;i<n;i++){
        cout<<"Venta "<<(i+1)<<": ";
        cin>>v[i];
    }
}

void guardarVentas(const vector<double> &v){
    ofstream out("ventas.txt");
    for(size_t i=0;i<v.size();i++){
        out<<v[i]<<"\n";
    }
    out.close();
}

vector<double> leerVentas(){
    vector<double> v;
    ifstream in("ventas.txt");
    double x;
    while(in>>x) v.push_back(x);
    in.close();
    return v;
}

double totalVentas(const vector<double> &v){
    double s=0;
    for(size_t i=0;i<v.size();i++) s+=v[i];
    return s;
}

double promedioVentas(const vector<double> &v){
    if(v.empty()) return 0;
    return totalVentas(v)/v.size();
}

int main(){
    vector<double> ventas;
    ingresarVentas(ventas);
    guardarVentas(ventas);

    vector<double> datos = leerVentas();

    double total = totalVentas(datos);
    double prom = promedioVentas(datos);

    int mayores=0, menores=0;
    for(size_t i=0;i<datos.size();i++){
        if(datos[i]>prom) mayores++;
        else if(datos[i]<prom) menores++;
    }

    cout<<"Total de ventas: "<<total<<endl;
    cout<<"Promedio de ventas: "<<prom<<endl;
    cout<<"Ventas mayores al promedio: "<<mayores<<endl;
    cout<<"Ventas menores al promedio: "<<menores<<endl;

    return 0;
}
