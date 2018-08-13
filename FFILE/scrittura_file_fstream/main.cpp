#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char frase[300];

    cout<<"Scrivi una frase nel file:"<<endl;
    gets(frase);

    ofstream f("C:\\Users\\cri\\Desktop\\prova.txt", ios::app);

    if(!f)
    {
        cout<<"E' stato rilevato un problema!"<<endl;
        return 1;
    }

    f<<frase<<endl;
    f.close();
    cout<<"Scrittura effettuata con successo!"<<endl;

    return 0;
}
