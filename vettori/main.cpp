#include <iostream>

using namespace std;

int main()
{
    int numeri[10];
    int i=0;

    do{
        cout<<"Inserisci il "<<i+1<<" numero: ";
        cin>>numeri[i];
        i++;
    }while(i<10);

    cout<<endl;

    cout<<"I valori inseriti nel vettore sono: ";
    for(i=0; i<10; i++)
    {
        cout<<numeri[i]<<"  ";
    }

    cout<<endl;

    // leggi all'incontrario
    cout<<"I valori inseriti nel vettore, all'incontrario, sono: ";
    for(i=9; i>0; i--)
    {
        cout<<numeri[i]<<"  ";
    }

    return 0;
}
