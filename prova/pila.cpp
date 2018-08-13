#include "pila.h"

Pila::Pila()
{
    top = NULL;
}

void Pila::Push(int n)
{
    nodo *elemento;
    elemento = new nodo;
    elemento -> val = n;
    elemento -> successivo = top;
    top = elemento;
}

int Pila::Pop()
{
    int returned;
    if(top != NULL)
    {
        returned = top -> val;
        temp = top -> successivo;
        delete top;
        top = temp;
    }
    else
    {
        returned = -1;
    }

    return returned;
}
