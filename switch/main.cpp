#include <iostream>

using namespace std;

int main()
{
    int scelta;
    char opzione;
    float n1, n2;

    cout<<"1) Somma"<<endl;
    cout<<"2) Differenza"<<endl;
    cout<<"3) Prodotto"<<endl;
    cout<<"Cosa scegli: ";
    cin>>scelta;

    switch(scelta)
    {
    case 1:
        float somma;
        cout<<"Inserisci il primo numero: ";
        cin>>n1;
        cout<<"Inserisci il secondo numero: ";
        cin>>n2;
        somma = n1+n2;
        cout<<"\nLa somma dei due nr e': "<<somma<<endl;
        break;
    case 2:
        float differenza;
        cout<<"Inserisci il primo numero: ";
        cin>>n1;
        cout<<"Inserisci il secondo numero: ";
        cin>>n2;
        differenza = n1-n2;
        cout<<"\nLa differenza dei due nr e': "<<differenza<<endl;
        break;
    case 3:
        float prodotto;
        cout<<"Inserisci il primo numero: ";
        cin>>n1;
        cout<<"Inserisci il secondo numero: ";
        cin>>n2;
        prodotto = n1*n2;
        cout<<"\nIl prodotto dei due nr e': "<<prodotto<<endl;
        break;
    default:
        cout<<"Valore non valido! Devi inserire 1,2 o 3"<<endl;
        break;
    }

    cout<<"Vuoi rieseguire il programma? [y/n] \n _> ";
    cin>>opzione;
    if(opzione == 'y' || opzione == 'Y')
    {
        main();
    }
    else
    {
        return 0;
    }
}
