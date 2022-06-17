#include <iostream>
#include "pila.h"
using namespace std;
void show(pila &origen, pila &destino, pila &auxiliar)
{
    cout << "--------------" << endl;
    cout << "\nA: " << endl;
    origen.print();
    cout << "B: " << endl;
    auxiliar.print();
    cout << "C: " << endl;
    destino.print();
    
}
void hanoi(int n, pila &origen, pila &destino, pila &auxiliar)
{
    
    if (n == 1)
    {
        int top = origen.top();
        destino.push(top);
        origen.pop();
        show(origen, destino, auxiliar);
        return;
    }
    else
    {
        //{mover n-1 discos de la torre origen a la torre auxiliar}
        hanoi(n - 1, origen, auxiliar, destino); //{llamada recursiva}
        // Mover un disco de la torre origen a la torre destino
        int top = origen.top();
        destino.push(top);
        origen.pop();
        show(origen, destino, auxiliar);
        //{mover n-1 discos de la torre auxiliar a la torre destino}
        hanoi(n - 1, auxiliar, destino, origen); //{llamada recursiva}
    }
    return;
}
int main()
{
    int n;
    pila origen;
    pila destino;
    pila auxiliar;
    cout<<"******\tTORRE DE HANOI\t******"<<endl;
    cout<<"Ingresa el numero de discos:\n";
    cin >> n;
    cout << "\nInicializando la Torre A con disco(s) del 1 al " <<n<< endl;
    for (int i = 0; i < n; i++)
    {
        origen.push(n - i);
    }
    cout<<"\nLos elementos de la Torre A son: ";
    origen.print();
    show(origen,destino,auxiliar);
    hanoi(n, origen, destino, auxiliar);
    cout<< "\n\tDiscos movidos exitosamente";
    cout<< "\nLos elementos de la Torre C son: ";
    destino.print();
    system("pause");
    return 0;
}