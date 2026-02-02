#include <iostream>
using namespace std;

int main(){
    int op;
    int n=0;
    bool ok=false;

    do{
        cout<<"\n--- MENU 27 ---\n";
        cout<<"1) Ingresar un numero\n";
        cout<<"2) Verificar rango 1-100\n";
        cout<<"3) Verificar par o impar\n";
        cout<<"4) Salir\n";
        cout<<"Opcion: ";
        cin>>op;

        if(op==1){
            cout<<"Ingrese n: ";
            cin>>n;
            ok=true;
        }else if(op==2){
            if(!ok) cout<<"Primero ingrese el numero.\n";
            else{
                if(n>=1 && n<=100) cout<<"SI esta en el rango.\n";
                else cout<<"NO esta en el rango.\n";
            }
        }else if(op==3){
            if(!ok) cout<<"Primero ingrese el numero.\n";
            else{
                if(n%2==0) cout<<"Es PAR\n";
                else cout<<"Es IMPAR\n";
            }
        }
    }while(op!=4);

    return 0;
}
