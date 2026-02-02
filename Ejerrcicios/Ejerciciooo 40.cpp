#include <iostream>
using namespace std;

int mayor(int a[], int n){
    int mx=a[0];
    for(int i=1;i<n;i++) if(a[i]>mx) mx=a[i];
    return mx;
}
int menor(int a[], int n){
    int mn=a[0];
    for(int i=1;i<n;i++) if(a[i]<mn) mn=a[i];
    return mn;
}
int contarPos(int a[], int n){
    int c=0;
    for(int i=0;i<n;i++) if(a[i]>0) c++;
    return c;
}
int contarNeg(int a[], int n){
    int c=0;
    for(int i=0;i<n;i++) if(a[i]<0) c++;
    return c;
}
int contarCeros(int a[], int n){
    int c=0;
    for(int i=0;i<n;i++) if(a[i]==0) c++;
    return c;
}

int main(){
    const int N=10;
    int a[N];

    for(int i=0;i<N;i++){
        cout<<"Numero "<<(i+1)<<": ";
        cin>>a[i];
    }

    cout<<"Mayor: "<<mayor(a,N)<<endl;
    cout<<"Menor: "<<menor(a,N)<<endl;
    cout<<"Positivos: "<<contarPos(a,N)<<endl;
    cout<<"Negativos: "<<contarNeg(a,N)<<endl;
    cout<<"Ceros: "<<contarCeros(a,N)<<endl;
    return 0;
}
