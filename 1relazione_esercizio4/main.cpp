#include <iostream>
#include <math.h>

using namespace std;

void somma();
void elevamento();

int main()
{
    int scelta;

    cout<<" ************* A TE LA SCELTA *************"<<endl<<endl;
    cout<<"Tasto 1 -> Somma 10 numeri a scelta."<<endl;
    cout<<"Tasto 2 -> Elevamento a potenza numero."<<endl;

    cout<<"Inserisci la scelta: ";
    cin>>scelta;

    switch(scelta)
    {
        case 1:
            somma();
        break;

        case 2:
            elevamento();
        break;

        default:
            main();
        break;
    }
    return 0;
}

void somma()
{
    cout<<"***************************** SOMMA 10 NUMERI DA TASTIERA *****************************"<<endl<<endl;

    int num;
    int somma = 0;

    for(int i=0; i<10; i++)
    {
        cout<<"Inserisci numero: ";
        cin>>num;

        if(num<0)
        {
            cout<<"NON SONO AMMESSI NUMERI NEGATIVI!"<<endl;
            break;
        }

        somma += num;

    }

    cout<<"La somma dei numeri inseriti e': "<<somma<<endl;
}



void elevamento()
{
    cout<<"***************************** ELEVA NUMERO PER ESPONENTE *****************************"<<endl<<endl;

    int base;
    int esp;
    int ris;

    cout<<"Inserisci base: ";
    cin>>base;

    cout<<"Inserisci esponente: ";
    cin>>esp;

    ris = pow(base,esp);

    cout<<"Risultato finale: "<<ris<<endl;


}




