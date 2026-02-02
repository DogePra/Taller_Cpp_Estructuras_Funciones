#include <iostream>
using namespace std;

struct Cliente{
    string nombre;
    int edad;
};

int main(){
    Cliente a[3];
    cin.ignore();
	cout<<"Ingrese el numero de clientes:\n";
    for(int i=0;i<3;i++){
        cout<<"Cliente "<<(i+1)<<" nombre: ";
        getline(cin,a[i].nombre);
        cout<<"Edad: ";
        cin>>a[i].edad;
        cin.ignore();
    }

    cout<<"\nMayores de edad:\n";
    for(int i=0;i<3;i++){
        if(a[i].edad>=18){
            cout<<a[i].nombre<<" - "<<a[i].edad<<endl;
        }
    }
    return 0;
}
