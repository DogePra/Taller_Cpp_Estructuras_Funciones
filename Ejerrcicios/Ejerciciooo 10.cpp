#include <iostream>
using namespace std;

int main(){
	int pares = 0, impares = 0;
	for(int i=0;i<100;i++){
		if(i%2 == 0){
			pares += i;	
		}
		else{
			impares += i;
		}
	}
	cout<<"La suma de los numeros pares es: "<<pares<<endl;
	cout<<"La suma de los numeros impares es: "<<impares<<endl;
	if(pares>impares){
		cout<<"La suma mayor es "<<pares;
	}
	else{
		cout<<"La suma mayor es "<< impares;
	}
	
}
