#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int i = 0;
    char operazione;

    cout<<"Quanti numeri vuoi inserire nel vettore? ";
    cin>>n;

    int v[n];

    while(i < n )
    {
        cout<<"Inserisci il "<< i + 1 <<" numero nel vettore: ";
        cin>>v[i];
        i++;
    }

    cout<<endl;

    cout<<"Numeri presenti nel vettore: ";
    for(i=0; i<n; i++)
    {
        cout<<v[i]<<"  ";
    }

    cout<<endl;

    cout<<"Desideri rieseguire il programma ? [s/n] \n _> ";
    cin>>operazione;
    if(operazione == 's' || operazione == 'S')
    {
        main();
    }
    else
    {
        return 0;
    }

}
