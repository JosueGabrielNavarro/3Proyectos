#include <iostream>

using namespace std;

int main(){
    float a, b, c, d, rst;

    cout<<"Ingrese el valor a: "; cin>>a;
    cout<<"Ingrese el valor b: "; cin>>b;
    cout<<"Ingrese el valor c: "; cin>>c;
    cout<<"Ingrese el valor d: "; cin>>d;

    rst = a+(b/(c-d));

    cout.precision(3);
    cout<<"\n El resultado es: "<<rst;
    
    return 0;

}
