#include "pila.h"

Pila::Pila()
{
    top = NULL;
}

// Inserimento
void Pila::Push(int n)
{
    // l'elemento va inserito nel nodo
    nodo *elemento;
    elemento = new nodo; // occupa una zona di mem nella mem heap
    elemento -> val = n;
    /*
    - il nuovo elemento inserito deve puntare a quello inserito precedentemente
    - il top contiene l'ind dell'ultimo dato inserito
    */
    elemento -> successivo = top; // successivo elemento puntera' a quello precedente, cosi almeno gli elementi rimangono collegati
    top = elemento; // appunto top contiene l'ind dell'ultimo elemento inserito
}

// Estrazione
int Pila::Pop()
{
    int returned;
    if(top != NULL) // andiamo a vedere se c'è qualcosa nella nostra pila
    {
        // andiamo a leggere il valore puntato da top
        // returned sara' uguale al valore dell'elemento puntato da top
        returned = top -> val;
        temp = top -> successivo;
        delete top;
        top = temp;
    }
    else
    {
        returned = -1; //errore, qualsiasi valore che vogliamo.. basta che riconosciamo che lo abbiamo scelto come valore di errore
    }
    return returned;
}
