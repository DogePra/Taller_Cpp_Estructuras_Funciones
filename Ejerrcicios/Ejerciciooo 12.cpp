#include<iostream>
using namespace std;
int numeros[8];
int menor; 
int mayor;

int main(){
	cout<<"Ingrese los numero que quieran\n";
	for(int i=0;i<8;i++){
		cin>>numeros[i];
		
	if(i==0){
			menor=numeros [i];
	}
	else if(numeros[i]<menor){
		menor=numeros[i];
	}
	 if(numeros[i]>mayor){
	 	mayor=numeros[i];
	 }
	}
	cout<<"El numero mayor es"<<mayor<<endl;
	cout<<"El numero menor es"<<menor<<endl;
	cout<<"La diferencia entre el mayor y menor"<<mayor-menor;
	return 0;
}
