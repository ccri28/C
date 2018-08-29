#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    int esp;
    int ris;

    cout<<"Inserisci un numero intero: ";
    cin>>num;

    cout<<"Adesso eleviamo ad un potenza il numero inserito, quindi inserisci esponente: ";
    cin>>esp;

    if(esp == 0)
    {
        ris = 1;
        cout<<"Qualsiasi numero elevato alla potenza 0, da come risultato 1"<<endl;
    }
    else
    {
        ris = pow(num,esp);

    }

    cout<<"Il risultato dell'operazione finale e': "<<ris<<endl;
    return 0;
}
