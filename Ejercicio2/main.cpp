#include <iostream>
#include "pila.h"
using namespace std;
int main(){
    pila A;
    int t;
    cout << "Longitud de la pila?: " << endl;
    cin >> t;
    for(int i = 0; i < t ; i++){
        A.push(i+1);
    }
    cout<<"\nPila A: ";
    A.print();
    cout << "\n\tEliminando Datos.."<<endl;
    for (int j = 0; j <= t; j++)
    {
        A.pop();
        A.print();
    }
    A.~pila();
    return 0;
}