#include <iostream>
using namespace std;
int main(){
	int numeros[10];
	int suma=0;
	float promedio = 0;
	float negativos = 0;
	float positivos = 0;
	float promediopos = 0;
	cout<<"Ingrese los valores"<<endl;
	for(int i=0;i<10;i++){
		cin>>numeros[i];
		suma +=numeros[i];
		promedio = suma/10;
		if(numeros[i]<0){
			negativos++;
		}
		else {
			positivos ++;}
		}
		promediopos = (positivos*100)/10;	
	cout<<"La suma de los numeros es : "<<suma<<endl;
	cout<<"El promedio de los numeros es: "<<promedio<<endl;
	cout<<"El porcentaje de positivos es:"<<promediopos<<endl;
	cout<<"El porcentaje de negativos es:"<<(negativos*100)/10<<endl; 
	}
	
	
	
	
	
	
	
