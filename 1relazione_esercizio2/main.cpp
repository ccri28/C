#include <iostream>

using namespace std;

int main()
{
    int n;
    int cont = 0;

    for(int i = 0; i < 10; i++)
    {
        cout<<"Inserisci numero: ";
        cin>>n;

        if(n % 2 == 0)
        {
            cont++;
        }
    }

    cout<<"In totale hai aggiunto "<<cont<<" numeri pari"<<endl;

    return 0;
}
