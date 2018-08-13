#include <iostream>

using namespace std;

struct prova
{
    int a;
    int b;
};

prova somma(prova *&n1, prova *&n2);
prova* somma2(prova *&n1, prova *&n2);

int main()
{
    prova *p;
    /*
    p è una nuova variabile di tipo prova
    p puntera' ad una zona della mem heap
    heap è una zona di mem in cui vanno a finire tutte le variabili dinamiche e quindi anche i puntatori
    heap è una porzione della ram che gestisce tutte le variabili dinamiche
    VARIABILI DINAMICHE -> VARIABILI CHE VENGONO CREATE DURANTE L'ESECUZIONE DEL PROGRAMMA
    int a, int b sono variabili statiche -> occupano mem finche' il programma non finisce
    I PUNTATORI SONO VARIBILI DINAMICHE, quello che viene puntato dai puntatori puo' sparire durante il programma
    CON I PUNTATORI POSSIAMO LIBERARE LA MEM OCCUPATA DALLE VARIABILI (PUNTATE DAL PUNTATORE) PRIMA DELLA FINE DEL PROGRAMMA
    */
    p = new prova;
    /*
    p riserva nella mem heap 8 byte, perche' punta sia ad a che a b
    a e b occupano 8 byte nella mem heap
    con i puntatori possiamo liberare questo spazio occupato da queste due variabili
    */
    p->a = 10;
    p->b = 20;

    prova *p2;
    p2 = new prova;
    p2->a = 30;
    p2->b = 40;


    prova risultato = somma(p,p2);
    cout<<"a: "<<risultato.a<<endl;
    cout<<"b: "<<risultato.b<<endl<<endl;


    prova *risultato2;
    risultato2 = somma2(p,p2);
    cout<<"a (puntatore): "<<risultato2->a<<endl;
    cout<<"b (puntatore): "<<risultato2->b<<endl;

    return 0;
}

prova somma(prova *&n1, prova *&n2)
{
    prova r;
    r.a = n1->a + n2->a; // 40
    r.b = n1->b + n2->b; // 60
    return r;
}

prova* somma2(prova *&n1, prova *&n2)
{
    prova *r;
    r = new prova;
    r->a = n1->a + n2->a; // 40
    r->b = n1->b + n2->b; // 60
    return r;
}

