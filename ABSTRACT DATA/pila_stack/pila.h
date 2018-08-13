#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED



#endif // PILA_H_INCLUDED

class Pila // detta anche stack
{
    private:
        struct nodo
        {
            int val; // valore che abbiamo inserito nella nostra pila, questo sara' il valore effettivo
            /*
            - successivo ci permetterà di puntare al nodo successivo
            - in questo modo abbiamo una struttura con gli elementi collegati tra di loro, in quanto ogni nodo punterà a quello successivo
            */
            nodo *successivo; // puntatore di tipo nodo all'elemento successivo
        };

        /*
        - la pila ha un punto di ingresso, che è la testa
        - anche la testa sara' un nodo
        - questa testa sara' il punto di ingresso e di uscita per tutti i dati che andremo ad inserire
        - top punta alla cima della nostra pila, ogni volta che inseriamo un elemento
        */

        nodo *top; // detta anche testa
        nodo *temp; // questo puntatore ci servira' per le estrazioni

    public:
        Pila();
        /*
        - con questa n andreamo a modificare il campo val
        - Push viene utilizzato per l'inserimento -> n, numero da inserire nella pila
        */
        void Push(int n);
        int Pop(); // estrazione dalla nostra pila

};
