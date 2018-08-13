#include <iostream>

using namespace std;

int main()
{
    int voti[30];
    int alunni;
    int somma = 0;
    int media;

    do{
        cout<<"Quanti alunni ci sono nella classe ? ";
        cin>>alunni;
    }while(alunni < 15 || alunni > 30);

    // inserisco elementi nel vettore
    for(int i = 0; i < alunni; i++)
    {
        do{
           cout<<"Inserisci il voto del "<< i + 1 <<" studente: ";
           cin>>voti[i];
           somma += voti[i];
        }while(voti[i] < 1 || voti[i] > 10);

    }
    //calcolo la media dei voti inseriti
    media = somma/alunni;

    //stampo il vettore
    for(int i = 0; i < alunni; i++)
    {
        cout<<endl<<i+1<<" voto: "<<voti[i]<<endl;
    }

    cout<<endl;

    cout<<"La media dei voti inseriti e': "<<media<<endl;

    return 0;
}
