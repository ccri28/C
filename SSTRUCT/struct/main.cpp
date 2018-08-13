#include <iostream>
#include <string>

// struct sono strutture di dati che possiamo personalizzare noi
using namespace std;

// definisci un nuovo tipo basato su questa struct persona
// e questo nuovo tipo chiamalo dati

struct persona
{
    int eta;
    string nome;
    string cognome;
};

int main()
{
    persona studente1;
    cout<<"Inserisci nome: ";
    cin>>studente1.nome;
    cout<<"Inserisci cognome: ";
    cin>>studente1.cognome;
    cout<<"Inserisci eta': ";
    cin>>studente1.eta;

    cout<<endl<<endl<<"Nome: "<<studente1.nome<<endl;
    cout<<"Cognome: "<<studente1.cognome<<endl;
    cout<<"Eta': "<<studente1.eta<<endl;


    return 0;
}
