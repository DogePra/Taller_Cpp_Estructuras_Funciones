#include <iostream>
using namespace std;

int main(){
    int a[10];
    int dentro=0, fuera=0;

    for(int i=0;i<10;i++){
        cout<<"Numero "<<(i+1)<<": ";
        cin>>a[i];

        if(a[i]>=20 && a[i]<=80) dentro++;
        else fuera++;
    }

    cout<<"Dentro (20-80): "<<dentro<<endl;
    cout<<"Fuera: "<<fuera<<endl;
    cout<<"% Dentro: "<<(dentro*100.0/10)<<"%"<<endl;
    cout<<"% Fuera: "<<(fuera*100.0/10)<<"%"<<endl;
    return 0;
}
