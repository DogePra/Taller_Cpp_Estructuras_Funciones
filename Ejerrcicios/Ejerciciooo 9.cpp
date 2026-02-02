#include <iostream>
using namespace std;

int main(){
	int n;
	int dentro = 0;
	int fuera = 0;
	cout<<"Ingrese 15 numeros"<<endl;
	for(int i=0;i<15;i++){
		cin>>n;
		if(n>= 10 && n<= 80){
			dentro ++;
		}
		else{
			fuera ++;
		}
	}
	cout<<"Dentro del rango hay "<< dentro<<endl;
	cout<<"Fuera del rango hay" <<fuera;
	
	
	
	
}
