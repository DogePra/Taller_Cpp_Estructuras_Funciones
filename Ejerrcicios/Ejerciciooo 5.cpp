#include <iostream>
using namespace std;

int main(){
	int n;
	int tot = 0;
	int suma = 0;
	cout<<"Ingrese el numero que quiera saber la tabla de multiplicar\n";
	cin>>n;
	for(int i=1;i<=10;i++){
		tot = i*n;
		cout<<n<<"x"<<i<<"="<<tot<<endl;
		suma += tot;
	}
	cout<<"La suma de los resultados es de: "<<suma;
}
	
	
	
	
