#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    cout<<"\n\t0 = Nero \t\t 1 = Blu scuro"<<endl;
    cout<<"\t2 = Verde \t\t 3 = Verde acqua"<<endl;
    cout<<"\t4 = Bordeaux \t\t 5 = Viola"<<endl;
    cout<<"\t6 = Verdeoliva \t\t 7 = Grigio chiaro"<<endl;
    cout<<"\t8 = Grigio \t\t 9 = Blu"<<endl;
    cout<<"\tA = Verdelimon \t\t B = Azzurro"<<endl;
    cout<<"\tC = Rosso \t\t D = Fucsia"<<endl;
    cout<<"\tE = Giallo \t\t F = Bianco"<<endl<<endl<<endl;


    char parola[8] = "color ";

    cout<<"Quale colore per lo sfondo desideri utilizzare ? \n _> ";
    cin>>parola[6];
    cout<<"Quale colore per il carattere desideri utilizzare ? \n _> ";
    cin>>parola[7];
    parola[8] = '\0';

    system(parola);
    system("pause");

    return 0;
}
