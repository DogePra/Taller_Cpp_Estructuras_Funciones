#include <iostream>
using namespace std;
int main(){
	int n;
	int positivos = 0, negativos = 0, iguales = 0;
	cout<<"Ingrese 10 numeros\n";
	for(int i=0;i<10;i++){
		cin>>n;
		if(n>0){
			positivos ++;	
		}
		else if(n<0){
			negativos ++;
		}
		else{
			iguales++;
		}
	}
cout<<"Los numeros positivos son "<<positivos<<endl;
cout<<"Los numeros negativos son "<<negativos<<endl;
cout<<"Los numeros iguales a 0 son "<<iguales<<endl;
return 0;
		
}
