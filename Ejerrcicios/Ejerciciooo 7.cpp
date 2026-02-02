#include <iostream>
using namespace std;

int main(){
	int contador = 0;
	int noc = 0;
	for(int i=1;i<=50;i++){
		if(i%3 == 0){
			contador ++;
		}
		else{
			noc ++;
		}
	}
	cout<<"Hay "<<contador<<" que son multiplo de 3"<<endl;
	cout<<"No son multiplos de 3, "<<noc<<" numeros.";
	
	
	
	
	
	
	
	

}
