#include <iostream>
#include "pila.h"
using namespace std;
int main(){
    pila A;
    int t, _dato;
    cout << "Longitud de la pila?: " << endl;
    cin >> t;
    for(int i = 0; i < t ; i++){
        A.push(i+1);
    }
    cout<<"\nPila A: ";
    A.print();
    cout<<"Que dato desea buscar?: "<<endl;
    cin >> _dato;
    A.busqueda(_dato);
    A.~pila();
    return 0;
}