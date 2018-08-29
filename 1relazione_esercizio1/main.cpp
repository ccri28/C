#include <iostream>

using namespace std;

int main()
{
    int somma = 0;
    int num;
    int cont = 0;

    for(int i=0; i<10; i++)
    {
        cout<<"Inserisci numero: ";
        cin>>num;

        if(num == 0)
        {
            break;
        }

        cont++;
        somma += num;

    }

    cout<<"Hai inserito "<<cont<<" numeri"<<endl;
    cout<<"La somma dei numeri inseriti e': "<<somma<<endl;

    return 0;
}
