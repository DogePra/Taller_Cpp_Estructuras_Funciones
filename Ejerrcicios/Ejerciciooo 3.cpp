#include <iostream>
using namespace std;

int main(){
    int contador = 0;

    for(int i= 1; i<= 10; i++){
        cout << i<< endl;
        contador++;
    }

    cout << "El numero total de numeros son: "<< contador;
    return 0;
}
