#include <iostream>
#include <string.h>
//con define definiamo un costante, il cui valore non cambia mai
//ogni volta che vogliamo scrivere 30, scriviamo N
#define N 30

using namespace std;

char nome[N];

int main()
{
    cout<<"Ciao, come ti chiami?"<<endl<<endl;
    cin>>nome;
    int lunghezza = strlen(nome);
    cout<<"Il nome e' lungo: "<<lunghezza<<" caratteri."<<endl;
    return 0;
}
