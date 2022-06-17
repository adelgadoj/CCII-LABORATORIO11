#include <iostream>
#include "nodo.h"
using namespace std;
class pila
{
private:
    Nodo *head;
    int size;
public:
    pila();
    ~pila();
    void push(int);
    void pop(); //Funcion para eliminar
    void print();
};
pila::pila()
{
    head = nullptr;
    size = 0;
}
pila::~pila()
{
    Nodo *aux = head;
    while (head != nullptr)
    {
        aux = head->getNext();
        delete head;
        head = aux;
    }
}

void pila::push(int _dato)
{
    Nodo *temp = new Nodo(_dato);
    Nodo *aux = head;
    if (head == nullptr)
    {
        head = temp;
    }
    else
    {
        temp->setNext(aux);
        head = temp;
    }
    size++;
}
void pila::pop()
{
    Nodo *aux = head;
    if (head == nullptr)
    {
        cout << "##Pila vacia##" << endl;
        system("pause");
        return;
    }
    else
    {
        Nodo *aux = head;
        head = aux->getNext();
        delete aux;
        size--;
    }
}
void pila::print()
{
    Nodo *aux = head;
    while (aux)
    {
        cout << aux->getDato() << "->";
        aux = aux->getNext();
    }
    cout<<endl;
}

