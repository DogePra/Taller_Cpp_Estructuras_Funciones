#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(15);
    int m3=0, m5=0, ambos=0;

    for(int i=0;i<15;i++){
        cout<<"Valor "<<(i+1)<<": ";
        cin>>v[i];

        bool es3 = (v[i]%3==0);
        bool es5 = (v[i]%5==0);

        if(es3) m3++;
        if(es5) m5++;
        if(es3 && es5) ambos++;
    }

    cout<<"Multiplos de 3: "<<m3<<endl;
    cout<<"Multiplos de 5: "<<m5<<endl;
    cout<<"Multiplos de ambos: "<<ambos<<endl;
    return 0;
}
