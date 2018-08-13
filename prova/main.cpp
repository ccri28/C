#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "pila.cpp"

using namespace std;

int main()
{
    Pila p;

    cout<<"Sto inserendo: \n\n";
    for(int i=0; i<=10; i++)
    {
        cout<<i<<endl;
        p.Push(i);
    }

    cout<<"\n\nSto estraendo: \n\n";
    for(int i=0; i<=10; i++)
    {
        cout<<p.Pop()<<endl;
    }

    return 0;
}

