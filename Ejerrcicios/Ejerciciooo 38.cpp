#include <iostream>
using namespace std;

void llenar(double a[], int n){
    for(int i=0;i<n;i++){
        cout<<"Venta "<<(i+1)<<": ";
        cin>>a[i];
    }
}

double total(double a[], int n){
    double s=0;
    for(int i=0;i<n;i++) s+=a[i];
    return s;
}

double promedio(double a[], int n){
    if(n==0) return 0;
    return total(a,n)/n;
}

int mayoresAlProm(double a[], int n, double prom){
    int c=0;
    for(int i=0;i<n;i++){
        if(a[i]>prom) c++;
    }
    return c;
}

int main(){
    const int N=10;
    double a[N];

    llenar(a,N);

    double t = total(a,N);
    double p = promedio(a,N);
    int may = mayoresAlProm(a,N,p);

    cout<<"Total ventas: "<<t<<endl;
    cout<<"Promedio: "<<p<<endl;
    cout<<"Ventas mayores al promedio: "<<may<<endl;
    return 0;
}
