#include <iostream>
using namespace std;

int main(){
    int op;
    double a=0,b=0;
    bool ingresados=false;

    do{
        cout<<"\n--- MENU 26 ---\n";
        cout<<"1) Ingresar dos numeros\n";
        cout<<"2) Mostrar suma y resta\n";
        cout<<"3) Mostrar el mayor\n";
        cout<<"4) Salir\n";
        cout<<"Opcion: ";
        cin>>op;

        if(op==1){
            cout<<"Ingrese a: "; 
			cin>>a;
            cout<<"Ingrese b: "; 
			cin>>b;
            ingresados=true;
        }
        else if(op==2){
            if(!ingresados) cout<<"Primero ingrese los numeros.\n";
            else{
                cout<<"Suma: "<<(a+b)<<endl;
                cout<<"Resta (a-b): "<<(a-b)<<endl;
            }
        }
        else if(op==3){
            if(!ingresados) cout<<"Primero ingrese los numeros.\n";
            else{
                if(a>b) cout<<"Mayor: "<<a<<endl;
                else if(b>a) cout<<"Mayor: "<<b<<endl;
                else cout<<"Son iguales\n";
            }
        }
    }while(op!=4);

    return 0;
}
