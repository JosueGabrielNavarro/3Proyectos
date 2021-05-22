#include <iostream>

using namespace std;

int main(){
    float a, b, c, d, e, f, rst;

    cout<<"Ingrese el valor a: "; cin>>a;
    cout<<"Ingrese el valor b: "; cin>>b;
    cout<<"Ingrese el valor c: "; cin>>c;
    cout<<"Ingrese el valor d: "; cin>>d;
    cout<<"Ingrese el valor e: "; cin>>e;
    cout<<"Ingrese el valor f: "; cin>>f;

    rst = (a + (b/c))/(d + (e/f));

    cout.precision(3); 
    cout<<"\nEl resultado es: " << rst<<endl;

    return 0;
}
