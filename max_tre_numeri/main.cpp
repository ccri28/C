#include <iostream>

using namespace std;

void max(int a, int b, int c){
    int max = 0;

    if(a>b && a>c){
        max = a;
    }
    else if(b>a && b>c){
        max = b;
    }
    else if(c>a && c>b){
        max = c;
    }

    cout<<"Il numero maggiore e': "<<max<<endl;
}

int main()
{
    int a,b,c;

    cout<< "Inserisci il primo numero intero: ";
    cin>>a;
    cout<<"Inserisci il secondo numero intero: ";
    cin>>b;
    cout<<"Inserisci il terzo numero intero: ";
    cin>>c;

    max(a,b,c);

    return 0;
}
