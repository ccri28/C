#include <iostream>

using namespace std;

int main()
{
    /*
    BREAK:

    for(int i=10; i>=1; i--)
    {
        if(i==3)
        {
            cout<<"PROBLEMA RILEVATO!"<<endl;
            break;
        }
        cout<<i<<", ";
    }
    cout<<"FUOCO!"<<endl;


    CONTINUE:

    for(int i=10; i>=1; i--)
    {
        if(i==5)
        {
            cout<<"Valore saltato, ";
            continue;
        }
        cout<<i<<", ";
    }
    cout<<"FUOCO!"<<endl;
    */
    int i = 10;
    // label / etichetta
    loop:
        cout<<i<<", ";
        i--;
        if(i >= 1) goto loop;
        cout<<"FIRE!"<<endl;

    return 0;
}
