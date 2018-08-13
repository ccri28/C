#include <iostream>

using namespace std;

int* somma(int *&n1, int *&n2);

int main()
{
    int a = 10;
    int *p;
    p = &a;

    int b = 20;
    int *p1;
    p1 = &b;

    int *ris;
    ris = somma(p,p1);

    cout<<"Risultato somma: "<<*ris<<endl;

    return 0;
}

//come parametri passiamo gli indirizzi
int* somma(int *&n1, int *&n2)
{
    int *v;
    v = new int;
    *v = (*n1 + *n2);
    return v;
}
