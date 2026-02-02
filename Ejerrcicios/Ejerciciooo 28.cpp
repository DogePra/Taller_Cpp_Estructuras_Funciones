#include <iostream>
using namespace std;

int main(){
    int op;
    int a[10];
    bool llenado=false;

    do{
        cout<<"\n--- MENU 28 ---\n";
        cout<<"1) Ingresar 10 numeros\n";
        cout<<"2) Mostrar promedio\n";
        cout<<"3) Mostrar mayor y menor\n";
        cout<<"4) Contar positivos y negativos\n";
        cout<<"5) Salir\n";
        cout<<"Opcion: ";
        cin>>op;

        if(op==1){
            for(int i=0;i<10;i++){
                cout<<"Numero "<<(i+1)<<": ";
                cin>>a[i];
            }
            llenado=true;
        }
        else if(op==2){
            if(!llenado) cout<<"Primero ingrese los 10 numeros.\n";
            else{
                double suma=0;
                for(int i=0;i<10;i++) suma+=a[i];
                cout<<"Promedio: "<<(suma/10)<<endl;
            }
        }
        else if(op==3){
            if(!llenado) cout<<"Primero ingrese los 10 numeros.\n";
            else{
                int mayor=a[0], menor=a[0];
                for(int i=1;i<10;i++){
                    if(a[i]>mayor) mayor=a[i];
                    if(a[i]<menor) menor=a[i];
                }
                cout<<"Mayor: "<<mayor<<endl;
                cout<<"Menor: "<<menor<<endl;
            }
        }
        else if(op==4){
            if(!llenado) cout<<"Primero ingrese los 10 numeros.\n";
            else{
                int pos=0, neg=0;
                for(int i=0;i<10;i++){
                    if(a[i]>0) pos++;
                    else if(a[i]<0) neg++;
                }
                cout<<"Positivos: "<<pos<<endl;
                cout<<"Negativos: "<<neg<<endl;
            }
        }

    }while(op!=5);

    return 0;
}
