#include <iostream>

using namespace std;

int fattoriale(int n)
{
    if ( n > 1 )
    {
        return (n*fattoriale(n-1));
    }
    else
    {
        return 1;
    }
}

int main()
{
    int fatt = fattoriale(4);
    cout<<fatt<<endl;
    return 0;
}
