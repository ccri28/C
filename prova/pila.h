#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED



#endif // PILA_H_INCLUDED


class Pila
{
    private:
        struct nodo
        {
            // valore effettivo
            int val;
            // valore successivo
            nodo *successivo;
        };

        nodo *top; // testa, punto ingresso e uscita dati
        nodo *temp; // ci serve per l'estrazione

    public:
        Pila();
        void Push(int n);
        int Pop();

};
